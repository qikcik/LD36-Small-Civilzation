#include "Game.h"



Game::Game()
{
    window.create(sf::VideoMode(1024, 768), "My window");
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);

    timeSinceLastUpdate = sf::Time::Zero;
    TimePerFrame = sf::seconds( 1.f / 60.f );
    scena = new Menu();
}

Game::~Game()
{
    delete scena;
}

void Game::render()
{
    while( window.isOpen() )
    {

        timeSinceLastUpdate += clock.restart();
        while( timeSinceLastUpdate > TimePerFrame )
        {
            events();
            update();
            timeSinceLastUpdate -= TimePerFrame;
        }
        window.clear();
        scena->draw(&window);
        window.display();
    }
}

void Game::events()
{
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update()
{
    int x = scena->update(&window);

    switch(x)
    {
    case 0:
        break;
    case 1:
        delete scena;
        scena = new Play();
        break;

    }
}
