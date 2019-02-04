#include "TileBlank.h"

TileBlank::TileBlank()
{
    ttile.loadFromFile("data/tile.png");
    stile.setTexture(ttile);
    id =0;

    money     = 1;
    people    = 0;
    rolnictwo = 0;
    przemysl  = 0;
    wiara     = 0;
}

TileBlank::~TileBlank()
{
    //dtor
}
