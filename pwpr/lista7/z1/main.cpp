#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

    int szerokosc=800;
    int wysokosc=600;
    int promien=100;
    int keyonoff=1;
    int x=(szerokosc/2)-promien;
    int y=(wysokosc/2)-promien;
    int d=2*promien;
    float vx=0.05;
    float vy=0.05;
    const int N=10;
    sf::CircleShape kolka[N];


    void init()
    {
        for(int i=0;i<N;i++)
        {
            kolka[i] =sf::CircleShape(promien);
            kolka[i].setPosition(x,y);
            kolka[i].setFillColor(sf::Color::Green);
        }
    }

void przesun(float Px, float Py,sf::CircleShape &obiektprzes)
{
    obiektprzes.move(Px,Py);
        if (obiektprzes.getPosition().x>szerokosc)
                      obiektprzes.setPosition(0,y);
}

int main()
{



    sf::RenderWindow window(sf::VideoMode(szerokosc,wysokosc),"okno");

    //sf::CircleShape shape(promien);

    //shape.setFillColor(sf::Color::Black);//koloruje kolo
    //shape.setPosition(x,y);
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
        //for(int i=0;i<N;i++)
          //  przesun(1.1,0,kolka[i]);

        window.clear(sf::Color::Blue);
        if(keyonoff)
        //{
            for(int i=0;i<N;i++)
            {
                window.draw(kolka[i]);
            }
        //}
        window.display();
    }
    return 0;
}
