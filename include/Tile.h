#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>
#include <Data.h>

class Tile
{


    public:

        sf::Texture ttile;
        sf::Sprite stile;

        int id;

        int people;
        int money;
        int rolnictwo;
        int przemysl;
        int wiara;

        Tile();
        virtual ~Tile();

        void draw(sf::RenderWindow *window);
        void update(Data *data);

        void setposition(int x , int y);
};

#endif // TILE_H
