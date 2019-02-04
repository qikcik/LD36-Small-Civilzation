#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <Scena.h>
#include <Menu.h>
#include <Play.h>

class Game
{
public:

    sf::RenderWindow window;
    sf::Event event;

    Scena *scena;


    sf::Clock clock;
    sf::Time timeSinceLastUpdate;
    sf::Time TimePerFrame;

    Game();
    ~Game();

    void render();
    void events();
    void update();
    void draw();


};

#endif // GAME_H
