#include "TileDeiity2.h"

TileDeiity2::TileDeiity2()
{
    ttile.loadFromFile("data/deity2.png");
    stile.setTexture(ttile);
    id =3;

    money     = 40;
    people    = -5;
    rolnictwo = 0;
    przemysl  = -10;
    wiara     = 0;
}

TileDeiity2::~TileDeiity2()
{
    //dtor
}
