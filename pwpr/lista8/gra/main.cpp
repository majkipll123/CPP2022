#include <SFML/Graphics.hpp>
#include <iostream>
//#include "zmienne.h"
//#include "funkcje.h"
//gra program ktora ma byc w sfml i ma byc zrobiona w c++ i ma byc zrobiona w 2d
//gra pinball
    int szerokosc=800;
    int wysokosc=600;
    int keyonoff=1;
    float g=0.0001;
    int kd=0;
    int ka=0;
    int N=5;
    int szp=45;
    sf::CircleShape pilka(50);
sf::RenderWindow window(sf::VideoMode(wysokosc, szerokosc), "Pinball");
   /* void init()
    {
        for(int i=0;i<N;i++)
        {
          //  for(int t=1;t<=N;t++){
            np[i]=promien*(rand()/(float)RAND_MAX);

            dx[i]=vx*(rand()/(float)RAND_MAX);//*g*t;
            dy[i]=vy*(rand()/(float)RAND_MAX);//*g*t;
            kolka[i] =sf::CircleShape(np[i]);
            kolka[i].setPosition(x+x*(rand()/(float)RAND_MAX),y+y*(rand()/(float)RAND_MAX));
            R[i]=200*(rand()/(float)RAND_MAX);
            G[i]=20*(rand()/(float)RAND_MAX);
            B[i]=200*(rand()/(float)RAND_MAX);
            kolka[i].setFillColor(sf::Color(R[i],B[i],G[i]));
           // pr[i]=1/i;
          //  }
        }
    }*/

void  pilka()
{
    sf::Texture texture;
    if (!texture.loadFromFile("kula.png"))
        std::cout<<"blad"<<std::endl;
    sf::CircleShape pilka(50);
    pilka.setTexture(&texture);
    pilka.setPosition(400,300);

}
void przeszkoda(float pox,float poy)
{
    sf::Texture texture;
    if (!texture.loadFromFile("przeszkoda.png"))
        std::cout<<"blad"<<std::endl;
    sf::CircleShape przeszkoda(szp);
    przeszkoda.setTexture(&texture);
    przeszkoda.setPosition(pox,poy);
    window.draw(przeszkoda);
}
void logika()
{
    if(ka==1)
    {
        if(pilka.getPosition().x>0)
        {
            pilka.move(-5,0);
        }
    }
    if(kd==1)
    {
        if(pilka.getPosition().x<800)
        {
            pilka.move(5,0);
        }
    }
    if(pilka.getPosition().x>przeszkoda.getPosition().x-50 && pilka.getPosition().x<przeszkoda.getPosition().x+50 && pilka.getPosition().y>przeszkoda.getPosition().y-50 && pilka.getPosition().y<przeszkoda.getPosition().y+50)
    {
        std::cout<<"przegrales"<<std::endl;
        window.close();
    }
}
void menu()
{
//wyswietlanie menu gry z wyborami play, exit, options
window.clear(sf::Color::Black);
sf::Font font;
if (!font.loadFromFile("arial.ttf"))
    std::cout<<"blad"<<std::endl;

}

int main()
{


	// Start the game loop
   while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.key.code == sf::Keyboard::Escape)
                window.close();
            if (event.key.code == sf::Keyboard::A)
                ka=1-ka;
            if (event.key.code == sf::Keyboard::B)
                kd=1-kd;

        }

        // Clear screen
        window.clear();

        // Draw the sprite
        pilka();
        window.draw(pilka);
        przeszkoda(150,200);
        przeszkoda(150,400);
        przeszkoda(300,200);
        logika();
        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
