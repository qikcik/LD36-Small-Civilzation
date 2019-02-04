#include "TileTree.h"

TileTree::TileTree()
{
    ttile.loadFromFile("data/tiletree.png");
    stile.setTexture(ttile);
    id=16;
    money     = 0;
    people    = 0;
    rolnictwo = 1;
    przemysl  = 0;
    wiara     = 0;
}

TileTree::~TileTree()
{

}

