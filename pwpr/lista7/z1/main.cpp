#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{

    int szerokosc=800;
    int wysokosc=600;
    int promien=100;
    int keyonoff=1;
    int x=(szerokosc/2)-promien;
    int y=(wysokosc/2)-promien;
    float vx=0.05;
    float vy=0.05;
    //const int N=1000;
    //sf::CiRcleShape kolka[N];
    //void init()
    //{
        //for(int i=0;i<N;i++)
        //{
           // kolka[i] =sf::CircleShape(promien);
            //kolka[i].setPosition(szerokosc/2+szerokosc/2*(rand()/(float)RAND_MAX))
        //}
    //}
    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");
    sf::CircleShape shape(promien);
    shape.setFillColor(sf::Color::Black);
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
        shape.setPosition(x,y);
        window.clear(sf::Color::Blue);
        if(keyonoff)
        window.draw(shape);
        window.display();
    }
    return 0;
}
