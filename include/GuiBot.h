#ifndef GUIBOT_H
#define GUIBOT_H

#include <SFML/Graphics.hpp>
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



class GuiBot
{
    public:

        sf::Texture tguibarbot;
        sf::Sprite sguibarbot;

        Tile *tile[20];
        int tmini, tmax;

        sf::Texture ticon[5];
        sf::Sprite icon[5];

        sf::Font font;
        sf::Text text;

        GuiBot();
        virtual ~GuiBot();

        void draw(sf::RenderWindow *window);
        void update(sf::RenderWindow *window , Data *data);

};

#endif // GUIBOT_H
