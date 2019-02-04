#include "Menu.h"


Menu::Menu()
{
    texture.loadFromFile("data/splash1.png");
    sprite.setTexture(texture);
    x = 0;

    }

Menu::~Menu()
{
    //dtor
}

void Menu::draw(sf::RenderWindow *window)
{
    window->draw(sprite);
}

int Menu::update(sf::RenderWindow *window)
{
    //sf::Mouse::setPosition(sf::Vector2i(0,0));
    if(x > 60)
        {return 1;}

    if( sf::Keyboard::isKeyPressed( sf::Keyboard::Space ) )
    {
        x++;
    }

    if(x == 20)
        {texture.loadFromFile("data/splash3.png");}
    if(x == 40)
        {texture.loadFromFile("data/splash2.png");}

}
