#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include <iostream>
#include <unistd.h>
//#include <windows.h>
using namespace sf;

int wys = 664;
int szer = 514;
int N = 10;
int counter = 0;
int x=(szer/2)-11, y=400, h=150;
float vy=0;
Font font;
Text text;
//SoundBuffer jump, fall;
//Sound sound1, sound2;
Texture t1, t2, t3, t4;
RectangleShape floor(Vector2f(szer,10));

struct point
{
    int x,y;
};

void _font()
{
    font.loadFromFile("assets/TirtoWritterRegular-Eajrl.ttf");
    text.setFont(font);
    text.setString("Wynik: " + std::to_string(counter));
}

//void _sound()
//{
    //jump.loadFromFile("assets/mixkit-quick-jump-arcade-game-239.wav");
    //fall.loadFromFile("assets/mixkit-arcade-retro-game-over-213.wav");
    //sound1.setBuffer(jump);
    //sound2.setBuffer(fall);
//}

void _floor()
{
    floor.setPosition(0,wys);
    floor.setFillColor(Color::White);

}

void _movment()
{
    //prawo lewo
    if(Keyboard::isKeyPressed(Keyboard::Right)) x+=3;
    else if(Keyboard::isKeyPressed(Keyboard::Left)) x-=3;

    //ruch w pionie
    vy+=0.2;
    y+=vy;

    //przechodzenie przez sciany
    if(x+40<0) x=szer;
    else if(x>szer) x=-40;

    if(y+45>=floor.getPosition().y) vy=-10;
}

int main()
{
    srand(time(NULL));
    RenderWindow window(sf::VideoMode(szer,wys),"Gra");
    window.setFramerateLimit(60);

    _font();
    //_sound();
    _floor();

    t1.loadFromFile("assets/platform.png");
    t2.loadFromFile("assets/background.png");
    t3.loadFromFile("assets/hero.png");
    Sprite platform(t1), background(t2), hero(t3);

    point plat[N];
    for(int i=0;i<N;i++)
    {
        plat[i].x=rand()%(szer-89);
        plat[i].y=rand()%(wys-79);
    }

    while(window.isOpen())
    {
        if(y>wys)
        {
            //sound2.play();
            usleep(1500);
            window.close();
        }
        Event event;
        while (window.pollEvent(event))
        {
            if(event.type == Event::Closed)
                window.close();
            if(Keyboard::isKeyPressed(Keyboard::Escape))
                window.close();
        }

        _movment();

        //platformy
        if(y<h)
        {
            for(int i=0;i<N;i++)
            {
                y=h;
                plat[i].y=plat[i].y-vy;
                floor.setPosition(0,floor.getPosition().y-vy);
                if(plat[i].y>wys)
                {
                    plat[i].y = 0;
                    plat[i].x = rand()%(szer-89);
                }
            }
        }

        //odbicie od platformy
        for(int i=0;i<N;i++)
        {
            if((x+48>plat[i].x) && (x+48<plat[i].x+130) && (y+70>plat[i].y) && (y+70<plat[i].y+16) && (vy>0))
            {
                vy=-10;
                counter+=10;
                text.setString("Wynik: " + std::to_string(counter));
                //sound1.play();
            }
        }

        //rysowanie
        hero.setPosition(x,y);
        window.draw(background);
        for(int i=0;i<N;i++)
        {
            platform.setPosition(plat[i].x,plat[i].y);
            window.draw(platform);
        }
        window.draw(hero);
        window.draw(floor);
        window.draw(text);
        window.display();
    }
    return 0;
}
