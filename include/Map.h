#ifndef MAP_H
#define MAP_H

#include <SFML/Graphics.hpp>
#include <Data.h>
#include <Tile.h>

#include <TileBlank.h>
#include <TileBlok.h>
#include <TileTree.h>
#include <TileCave.h>
#include <TileDeiity2.h>
#include <TileDeily1.h>
#include <TileDeity.h>
#include <TileDeity3.h>
#include <TileDom.h>
#include <TileFabryka.h>
#include <Tilekamienie.h>
#include <TileKopalnia.h>
#include <TileKrowa.h>
#include <TileLumberjack.h>
#include <TilePole.h>
#include <TileQuarry.h>
#include <TileRopa.h>
#include <TileSzklarnia.h>
#include <TileTree.h>
#include <TileWoodenhouse.h>


class Map
{
    public:

        Tile *tile[5][5];
        int MapView;
        int frame;
        bool x;

        Map();
        virtual ~Map();
        void draw(sf::RenderWindow *window);
        void update(sf::RenderWindow *window , Data *data);
        void nowy (int i ,  int j , int id,Data *data);
        bool check(int i ,int j, Tile *tile2, Data *data);
};

#endif // MAP_H
