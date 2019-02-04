#include "TileDeity3.h"

TileDeity3::TileDeity3()
{
    ttile.loadFromFile("data/deity3.png");
    stile.setTexture(ttile);
    id =6;

    money     = 80;
    people    = -10;
    rolnictwo = 0;
    przemysl  = -20;
    wiara     = 0;
}

TileDeity3::~TileDeity3()
{
    //dtor
}
