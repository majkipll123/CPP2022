//gra pinball z uzyciem biblioteki sfml
#include <iostream>
#include "Game.h"

const int W=800;
const int S=600;
int main()
{
    sf::RenderWindow window(
    sf::Event ev;
    while(window.isOpen())
    {
        while(window.pollEvent(ev))
        {
            switch(ev.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code==sf::Keyboard::Escape)
                    window.close();
                break;
            }
        }
        //update

        //render
        window.clear(sf::Color::Black);



        window.display();
    }
    return 0;
}
