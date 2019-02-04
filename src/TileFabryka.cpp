#include "TileFabryka.h"

TileFabryka::TileFabryka()
{
    ttile.loadFromFile("data/fabryka.png");
    stile.setTexture(ttile);
    id =8;

    money     = -50;
    people    = -15;
    rolnictwo = 0;
    przemysl  = 50;
    wiara     = 0;
}

TileFabryka::~TileFabryka()
{
    //dtor
}
