#include "TileKrowa.h"

TileKrowa::TileKrowa()
{
    ttile.loadFromFile("data/krowa.png");
    stile.setTexture(ttile);
    id =10;

    money     = -99;
    people    = 0;
    rolnictwo = 99;
    przemysl  = 99;
    wiara     = 99;
}

TileKrowa::~TileKrowa()
{
    //dtor
}
