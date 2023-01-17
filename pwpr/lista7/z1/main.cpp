#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

    int szerokosc=800;
    int wysokosc=600;
    int promien=100;
    int keyonoff=1;
    int x=(szerokosc/2)-promien;
    int y=(wysokosc/2)-promien;


int main()
{
    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");
    sf::CircleShape shape(promien);
    shape.setFillColor(sf::Color::Black);//koloruje kolo
    shape.setPosition(x,y);
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
        window.clear(sf::Color::Blue);
        if(keyonoff)
                window.draw(shape);
        window.display();
    }
    return 0;
}
