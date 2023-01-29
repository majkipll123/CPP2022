//gra pinball z uzyciem biblioteki sfml
#include <iostream>


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
//#include <SMFL/Audio.hpp>
#include <SFML/Network.hpp>

#include "menu.h"


int punkty=0;
int wys=800;
int szer=600;
sf::Vector2f mp; // wektor o koordynatach myszki
sf::RenderWindow window(sf::VideoMode(szer, wys), "SFML window");
//bool do sprawdzania czy mysz jest nad przyciskiem
 bool isSpriteHover(sf::FloatRect sprite, sf::Vector2f mp)
        {
                if (sprite.contains(mp)){
                return true;
                }
                return false;
        }

//tworzy przycisk

void pilka()
{
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("kula.png"));

    sf::Sprite przycisk(texture);
}
void prz()
{
    sf::Texture texture;
        texture.loadFromFile("kula.png");

        sf::Sprite przycisk;
        przycisk.setTexture(texture);
}
//menu posiadajace wybor graj, wyjdz, poziom trudnosci
void menu()
{
    sf::Texture menu;
    menu.loadFromFile("menu.png");
    sf::Sprite menut(menu);
    //dodaj przyciski do menu
}
int main()
{
    
    sf::Texture texture;
        texture.loadFromFile("kula.png");

        sf::Sprite przycisk;
        przycisk.setTexture(texture);
    prz();
    pilka();
        sf::Vector2f mp;
    mp.x = sf::Mouse::getPosition(window).x;
    mp.y = sf::Mouse::getPosition(window).y;





	// Start the game loop
    Menu menu(window.getSize().)
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                window.close();
            //cos z myszka to robi
            if(isSpriteHover(przycisk.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
            {
               if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                {
                        punkty++;
                        //std::cout<<punkty;
                }
            }
        }

        // Clear screen
        window.clear(sf::Color::Blue);
        przycisk.setPosition(sf::Vector2f(szer/2, 300));
        window.draw(przycisk);
        // Draw the sprite
        window.draw(przycisk);
        menu.draw(window);
        // Update the window
        window.display();
    }

return 0;
}
