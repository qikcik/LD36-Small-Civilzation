#include "TileRopa.h"

TileRopa::TileRopa()
{
    ttile.loadFromFile("data/ropa.png");
    stile.setTexture(ttile);
    id =14;

    money     = -25;
    people    = -10;
    rolnictwo = 0;
    przemysl  = 50;
    wiara     = 0;
}

TileRopa::~TileRopa()
{
    //dtor
}
