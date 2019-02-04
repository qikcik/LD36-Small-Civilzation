#include "TileDom.h"

TileDom::TileDom()
{
    ttile.loadFromFile("data/dom.png");
    stile.setTexture(ttile);
    id =7;

    money     = -15;
    people    = 10;
    rolnictwo = -5;
    przemysl  = -10;
    wiara     = 0;
}

TileDom::~TileDom()
{
    //dtor
}
