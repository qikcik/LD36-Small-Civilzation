#include "TileDeity.h"

TileDeity::TileDeity()
{
    ttile.loadFromFile("data/kamienie.png");
    stile.setTexture(ttile);
    id=5;
    money     = 10;
    people    = -1;
    rolnictwo = -2;
    przemysl  = -1;
    wiara     = 0;
}

TileDeity::~TileDeity()
{

}
