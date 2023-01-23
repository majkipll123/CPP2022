#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
//s#include <SMFL/Audio.hpp>
#include <SFML/Network.hpp>
class Game

{
    private::
    sf::RenderWindow
    void initVariables();
    void initWindow();
public
    // konstruktor
    Game();
    virtual ~Game();
    // funkce
    void update();
    void render();

}