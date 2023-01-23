#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>


        bool isSpriteHover(sf::FloatRect sprite, sf::Vector2f mp)
        {
                if (sprite.contains(mp)){
                return true;
                }
                return false;
        }


int main()
{

        sf::RenderWindow window, window2, window3;
                window.create(sf::VideoMode(800, 600),"My first Visual Studio window!");

        sf::Texture texture;
        if(!texture.loadFromFile("kula.png"))
        {
                return 1;
        }
        sf::Sprite sprite;
        sprite.setTexture(texture);

        sf::Vector2f mp;
    mp.x = sf::Mouse::getPosition(window).x;
    mp.y = sf::Mouse::getPosition(window).y;



        while(window.isOpen())
        {
                sf::Event event;

                while(window.pollEvent(event))
                {
                        if(event.type == sf::Event::Closed)
                                window.close();

                        if(isSpriteHover(sprite.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)) == true)
         {
                if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                {
                        std::cout<<"elo"<<std::endl;
                }
         }

             }
                window.clear(sf::Color::Black);

                sprite.setPosition(sf::Vector2f(50, 300));

                window.draw(sprite);

                window.display();

}

return 0;
}
