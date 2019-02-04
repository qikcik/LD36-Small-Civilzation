#include "TileBlok.h"

TileBlok::TileBlok()
{
    ttile.loadFromFile("data/blok.png");
    stile.setTexture(ttile);
    id =1;

    money     = 50;
    people    = 20;
    rolnictwo = -10;
    przemysl  = -30;
    wiara     = 0;
}

TileBlok::~TileBlok()
{
    //dtor
}
