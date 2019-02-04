#include "TileKopalnia.h"

TileKopalnia::TileKopalnia()
{
    ttile.loadFromFile("data/kopalnia.png");
    stile.setTexture(ttile);
    id =9;

    money     = -15;
    people    = -4;
    rolnictwo = 0;
    przemysl  = 20;
    wiara     = 0;
}

TileKopalnia::~TileKopalnia()
{
    //dtor
}
