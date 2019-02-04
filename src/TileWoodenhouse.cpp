#include "TileWoodenhouse.h"

TileWoodenhouse::TileWoodenhouse()
{
    ttile.loadFromFile("data/woodenhouse.png");
    stile.setTexture(ttile);
    id = 17;
    money     = -4;
    people    = 5;
    rolnictwo = -2;
    przemysl  = -1;
    wiara     = 0;
}

TileWoodenhouse::~TileWoodenhouse()
{

}

