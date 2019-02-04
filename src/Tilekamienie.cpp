#include "Tilekamienie.h"

TileKamienie::TileKamienie()
{
    ttile.loadFromFile("data/kamienie.png");
    stile.setTexture(ttile);
    id =18;

    money     = 10;
    people    = -1;
    rolnictwo = -1;
    przemysl  = -1;
    wiara     = 0;
}

TileKamienie::~TileKamienie()
{
    //dtor
}
