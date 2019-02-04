#include "TileCave.h"

TileCave::TileCave()
{
    ttile.loadFromFile("data/tilecave.png");
    stile.setTexture(ttile);
    id =2;

    money     = -4;
    people    = 2;
    rolnictwo = -3;
    przemysl  = 0;
    wiara     = 0;
}

TileCave::~TileCave()
{

}
