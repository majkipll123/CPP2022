//gra pinball w sfml 
#include <SFML/Graphics.hpp>
#include <iostream>
int n=3;
int startx =500; //startowa pozycja pilki
int starty = 700; //startowa pozycja pilki
int wysokosc = 600; //wysokosc okna
int szerokosc = 800; //szerokosc okna
int promien = 45; //promien pilki
float czas[n];//czas
sf::CircleShape pilka[n];
sf::RectangleShape przeszkoda1(sf::Vector2f(100, 100));
sf::RectangleShape przeszkoda2(sf::Vector2f(100, 100));
sf::RectangleShape przeszkoda3(sf::Vector2f(100, 100));
sf::RectangleShape przeszkoda4(sf::Vector2f(100, 100));
sf::RectangleShape przeszkoda5(sf::Vector2f(100, 100));

sf::RenderWindow window(sf::VideoMode(wysokosc, szerokosc), "Pinball"); //render window o nazwie Pinball

void init()
    {
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                czas[i]=0;
            }
            else
            {
                czas[i]=czas[i-1]+25;
            }
            pilka.setRadius(promien);
            pilka.setFillColor(sf::Color::Red);
            pilka.setPosition(startx,starty);
        }
    }

void rysuj(pil,prze)
{
    window.draw(pilka);
    window.draw(przeszkoda);
}

int main()
{
    pilka();
    przeszkody();
   
    
    
	
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.key.code == sf::Keyboard::Escape)
                window.close();
            //jezeli gracz nacisnie a to ruszy lewa paletka
            if(event.key.code == sf::Keyboard::A)
            {
                //rusz lewa paletka

            }
            //jezeli gracz nacisnie d to ruszy prawa paletka
            if(event.key.code == sf::Keyboard::D)
            {
                //rusz prawa paletka

            }
        }

        
        window.clear();

        
        rysuj();

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
