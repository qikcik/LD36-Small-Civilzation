#include "Data.h"

Data::Data()
{
    people = 0;
    money = 0;
    trybiki = 0;
    rolnictwo = 0;
    przemysl = 0;
    wiara = 0;
    idselect = 16;

    datap[0] =0;
    datap[1] =0;
    datap[2] =0;
    datap[3] =0;
    datap[4] =0;

}

Data::~Data()
{
    //dtor
}

void Data::reset()
{
    people = 0;
    money = 0;
    trybiki = 0;
    rolnictwo = 0;
    przemysl = 0;
    wiara = 0;

    datap[0] =0;
    datap[1] =0;
    datap[2] =0;
    datap[3] =0;
    datap[4] =0;
}
