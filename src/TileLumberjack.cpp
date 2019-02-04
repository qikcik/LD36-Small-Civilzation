#include "TileLumberjack.h"

TileLumberjack::TileLumberjack()
{
    ttile.loadFromFile("data/lumberjack.png");
    stile.setTexture(ttile);
    id=11;
    money     = 0;
    people    = -2;
    rolnictwo = 0;
    przemysl  = 1;
    wiara     = 0;
}

TileLumberjack::~TileLumberjack()
{

}
