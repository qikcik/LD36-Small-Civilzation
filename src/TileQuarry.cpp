#include "TileQuarry.h"

TileQuarry::TileQuarry()
{
    ttile.loadFromFile("data/kamieniolom.png");
    stile.setTexture(ttile);
    id=13;
    money     = 0;
    people    = -2;
    rolnictwo = 0;
    przemysl  = 5;
    wiara     = 0;
}

TileQuarry::~TileQuarry()
{

}


