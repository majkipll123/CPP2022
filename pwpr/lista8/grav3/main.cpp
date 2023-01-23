//gra pinball z uzyciem biblioteki sfml
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SMFL/Audio.hpp>
#include <SFML/Network.hpp>

int wys=800;
int szer=600;
sf::Vector2f mp; // wektor o koordynatach myszki
sf::RenderWindow window(sf::VideoMode(szer, wys), "SFML window");
//sprawdza czy mysz jest nad przyciskiem
bool isSpriteHover(sf::FloatRect sprite, sf::Vector2f mp)
        {
                if (sprite.contains(mp)){
                return true;
                }
                return false;
        }
//tworzy przycisk
void przycisk()
{
    sf::Texture texture;
        texture.loadFromFile("kula.png");

        sf::Sprite przycisk;
        przycisk.setTexture(texture);
}
void pilka()
{
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("kula.png"));
    sf::Sprite sprite(texture);
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
    //pobiera pozycje myszki
    mp.x = sf::Mouse::getPosition(window).x;
    mp.y = sf::Mouse::getPosition(window).y;
    // Create the main window





	// Start the game loop
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
                        //tutaj trzeba zrobic przejscie do gry/menu/itd
                        std::cout<<1<<std::endl;
                }
            }
        }

        // Clear screen
        window.clear(sf::Color::Blue);
        przycisk.setPosition(sf::Vector2f(400, 300));
        window.draw(przycisk);
        // Draw the sprite
        //window.draw(sprite);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
