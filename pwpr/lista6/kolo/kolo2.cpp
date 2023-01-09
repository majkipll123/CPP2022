#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
//kolko znika kiedy naciskasz spacje
int main()
{
   int jestkolo=1;
   sf::RenderWindow okno(sf::VideoMode(800,600),"moje okno");
   sf::CircleShape kolo(400.0f);
   kolo.setFillColor(sf::Color::Red);
   //w jaki sposob obslugiwac okno???????????? a=1-a gdzie a =1 to bedzie sei zamieniac ciagle
   while(okno.isOpen())
   {
       sf::Event event;
       while(okno.pollEvent(event))
       {
           if(event.type==sf::Event::Closed)
                okno.close();
           if(event.type==sf::Event::KeyPressed)
            jestkolo=1-jestkolo;
       }
       okno.clear(sf::Color::Black);
       if (jestkolo)okno.draw(kolo);
       okno.display();
   }

   return 0;
}

