#include "TilePole.h"

Tilepole::Tilepole()
{
    ttile.loadFromFile("data/pole.png");
    stile.setTexture(ttile);
    id =12;

    money     = -5;
    people    = -3;
    rolnictwo = 10;
    przemysl  = 0;
    wiara     = 0;
}

Tilepole::~Tilepole()
{
    //dtor
}
