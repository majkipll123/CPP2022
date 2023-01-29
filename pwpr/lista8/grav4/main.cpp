//prosta gra pinball z 4 przeszkodami i 1 pilka
//system punktowy i zycia
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
//#include <SMFL/Audio.hpp>
#include <SFML/Network.hpp>
int keyonoff=1;
bool koniecgry;
int punkty=0;
int wys=800;
int szer=600;
float g=0.000005;
sf::Vector2f mp; // wektor o koordynatach myszki
sf::RenderWindow window(sf::VideoMode(szer, wys), "SFML window");

void init()
{
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("kula.png"));
    sf::Sprite przycisk(texture);
}
logika();
{
    //kolizja z przeszkodami dodaje punkty
    //kolizja z dolnym brzegiem odejmuje zycie
    //kolizja z gornym brzegiem dodaje zycie
    //brak zycia konczy gre
    

}
//bool do sprawdzania czy mysz jest nad przyciskiem
 bool isSpriteHover(sf::FloatRect sprite, sf::Vector2f mp)
        {
                if (sprite.contains(mp)){
                return true;
                }
                return false;
        }
//przesuwanie kulki po ekranie 
void przesun(float &x, float &y, float &vx, float &vy, float &ax, float &ay)
{
    x+=vx;
    y+=vy;
    vx+=ax;
    vy+=ay;
    ay+=g;
    przes.move(Px,Py);
}
int main()
{
    init();
    while (window.isOpen())
    {}
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
        window.display();
}
    return 0;
}