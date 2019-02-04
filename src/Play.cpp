#include "Play.h"


Play::Play()
{
    texture.loadFromFile("data/ico5.png");
    sprite.setTexture(texture);
    sprite.setPosition(sf::Vector2f(974,0));
}

Play::~Play()
{
    //dtor
}

void Play::draw(sf::RenderWindow *window)
{
    gui.draw(window);
    mapa.draw(window);
    window->draw(sprite);
}

int Play::update(sf::RenderWindow *window)
{
    mapa.update(window ,&data);
    gui.update(window ,&data);

    sf::Vector2f mouse(sf::Mouse::getPosition(*window));

    if(sprite.getGlobalBounds().contains( mouse ))
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
            return 1;
    return 0;
}

