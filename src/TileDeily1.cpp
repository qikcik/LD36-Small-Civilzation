#include "TileDeily1.h"

TileDeily1::TileDeily1()
{
    ttile.loadFromFile("data/deity.png");
    stile.setTexture(ttile);
    id =4;

    money     = 20;
    people    = -2;
    rolnictwo = -5;
    przemysl  = -3;
    wiara     = 0;
}

TileDeily1::~TileDeily1()
{
    //dtor
}
