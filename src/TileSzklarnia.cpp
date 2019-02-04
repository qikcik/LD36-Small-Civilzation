#include "TileSzklarnia.h"

TileSzklarnia::TileSzklarnia()
{
    ttile.loadFromFile("data/szklarnia.png");
    stile.setTexture(ttile);
    id =15;

    money     = -40;
    people    = -5;
    rolnictwo = 60;
    przemysl  = 0;
    wiara     = 0;
}

TileSzklarnia::~TileSzklarnia()
{
    //dtor
}
