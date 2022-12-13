#include <iostream>
//using namespace std;
//sf
//cout<<

//konfiguracja sfm
//najprostrzy program ktory wyswietla jedna figure w okienku i cos z nia robic
//graficzny interface urzytkownika
//sfml pliki naglowkowe biblioteki
//sfml biblioteka od skrutu
//simlple fast mulitmedia library
//otwarcie nowego okienka
//wyswietlanie grafiki animacji
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
kolko znika kiedy naciskasz spacje
int main()
{
   int jestkolo=1;
   sf::RenderWindow okno(sf::VideoMode(800,600),"giga sraka");
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
            jestokno=1-jestokno;
       }
       okno.clear(sf::Color::Black);
       if (jestkolo)okno.draw(kolo);
       okno.display();
   }

   return 0;
}



