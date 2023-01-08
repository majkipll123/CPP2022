#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{

    int szerokosc=800;
    int wysokosc=600;
    //int promien=100;
    int keyonoff=1;
    //int srodek=szerokosc/2;
    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.type == sf::Event::KeyPressed)
                keyonoff=1-keyonoff;

        }
        window.clear(sf::Color::Black);
        if(keyonoff)
        window.draw(shape);
        window.display();
    }
    return 0;
}
