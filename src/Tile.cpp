#include "Tile.h"

Tile::Tile()
{
   stile.setPosition(sf::Vector2f(-100,-100));
}

Tile::~Tile()
{
    //dtor
}

void Tile::draw(sf::RenderWindow *window)
{
    window->draw(stile);
}

void Tile::update(Data *data)
{
    data->people += people;
    data->money += money;
    data->rolnictwo += rolnictwo;
    data->przemysl += przemysl;
    data->wiara += wiara;
}


void Tile::setposition(int x, int y)
{
    stile.setPosition(sf::Vector2f(x,y));
}


