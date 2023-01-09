#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
int szerokosc=800;
int wysokosc=600;
int promien=100;
const int N=100;
sf::CircleShape kolka[N];
void przesun(float PX, float PY, sf::CircleShape &obiektprzes)
{
    //przesunecie
    obiektprzes.move(PX,PY);
    if(obiektprzes.getPosition().x>wysokosc)
        obiektprzes.setPosition(0,wysokosc/2-szerokosc);
}
void init()//tworzy kolka
    {
        for(int i=0;i<N;i++)
        {
            kolka[i] =sf::CircleShape (promien*(rand()/(float)RAND_MAX));
            kolka[i].setPosition(szerokosc/2+szerokosc/2*(rand()/(float)RAND_MAX),
                                       wysokosc/2+wysokosc/2*(rand()/(float)RAND_MAX));//x i y
            kolka[i].setFillColor(sf::Color::Black);
        }
    }
int main()
{


    int keyonoff=1;
    int x=(szerokosc/2)-promien;
    int y=(wysokosc/2)-promien;
    float vx=0.05;
    float vy=0.05;


    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");
    //sf::CircleShape shape(promien);
    //shape.setFillColor(sf::Color::Black);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.key.code == sf::Keyboard::Escape)
                window.close();
            if(event.type == sf::Event::KeyPressed)
                keyonoff=1-keyonoff;

        }
        //shape.setPosition(x,y);
        for (int i=0; i<N; i++)
            window.draw(kolka[i]);
            //przesun(4.1,9,kolka[i]);
        window.clear(sf::Color::Blue);
        if(keyonoff)

        window.display();
    }
    return 0;
}
