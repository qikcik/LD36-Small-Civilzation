#include "Map.h"

Map::Map()
{
    MapView = 5;
    for( int i = 0; i != 5; i++ )
        for( int j = 0; j != 5; j++ )
            tile[i][j] = new TileBlank;

    int startX = ((1024 /2) - (MapView*110) /2);
    int startY = ((768 /2) - (MapView*110) /2) -40;

    for( int i = 0; i != MapView; i++ )
        for( int j = 0; j != MapView; j++ )
        {
            tile[i][j] ->setposition(  startX + i *110 , startY + j *110);
        }

    frame = 59;


}

Map::~Map()
{
    //dtor
}

void Map::draw(sf::RenderWindow *window)
{
    for( int i = 0; i != 5; i++ )
        for( int j = 0; j != 5; j++ )
        {
            tile[i][j] -> draw(window);

        }
}

void Map::update(sf::RenderWindow *window , Data *data)
{

    int startX = ((1024 /2) - (MapView*110) /2);
    int startY = ((768 /2) - (MapView*110) /2) -40;

    sf::Vector2f mouse(sf::Mouse::getPosition(*window));


    data->reset();
    for( int i = 0; i != 5; i++ )
        for( int j = 0; j != 5; j++ )
            tile[i][j]->update(data);

     for( int i = 0; i != 5; i++ )
        for( int j = 0; j != 5; j++ )
        {

            if(tile[i][j]->stile.getGlobalBounds().contains( mouse ))
            {
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                   x = true;
                else
                    x=false;

                    nowy(i,j , data->idselect, data );
                    tile[i][j]->setposition(  startX + i *110 , startY + j *110);


            }
        }



}

bool Map::check (int i ,int j ,Tile *tile2, Data *data)
{

    data->datap[0] = data->people - tile[i][j]->people + tile2->people;
    data->datap[1] = data->money - tile[i][j]->money + tile2->money;
    data->datap[2] = data->rolnictwo - tile[i][j]->rolnictwo + tile2->rolnictwo;
    data->datap[3] = data->przemysl - tile[i][j]->przemysl + tile2->przemysl;
    data->datap[4] = data->wiara - tile[i][j]->wiara + tile2->wiara;

    if(data->datap[0] >= 0 &&
       data->datap[1] >= 0 &&
       data->datap[2] >= 0 &&
       data->datap[3] >= 0 &&
       data->datap[4] >= 0 )
       return true;
    return false;
}

void Map::nowy (int i ,  int j , int id ,Data *data)
{

    Tile *test;

    switch(id)
    {
    case 0:
        test = new TileBlank;
        if(check(i , j , test , data) && x)
        {
            delete tile[i][j];
            tile[i][j] = new TileBlank;
        }
        break;

    case 1:
        test = new TileBlok;
        if(check(i , j , test , data) && x)
        {
            delete tile[i][j];
            tile[i][j] = new TileBlok;
        }
        break;
    case 2:
        test = new TileCave;
        if(check(i , j , test , data)&& x )
        {
            delete tile[i][j];
            tile[i][j] = new TileCave;
        }
        break;

    case 3:
        test = new TileDeiity2;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileDeiity2;
        }
        break;
    case 4:
        test = new TileDeily1;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileDeily1;
        }
        break;
    case 5:
        test = new TileDeity;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileDeity;
        }
        break;
    case 6:
        test = new TileDeity3;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileDeity3;
        }
        break;
    case 7:
        test = new TileDom;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileDom;
        }
        break;
    case 8:
        test = new TileFabryka;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileFabryka;
        }
        break;
    case 9:
        test = new TileKopalnia;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileKopalnia;
        }
        break;
    case 10:
        test = new TileKrowa;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileKrowa;
        }
        break;
    case 11:
        test = new TileLumberjack;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileLumberjack;
        }
        break;
    case 12:
        test = new Tilepole;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new Tilepole;
        }
        break;
    case 13:
        test = new TileQuarry;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileQuarry;
        }
        break;
    case 14:
        test = new TileRopa;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileRopa;
        }
        break;
    case 15:
        test = new TileSzklarnia;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileSzklarnia;
        }
        break;
    case 16:
        test = new TileTree;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileTree;
        }
        break;
    case 17:
        test = new TileWoodenhouse;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileWoodenhouse;
        }
        break;
    case 18:
        test = new TileKamienie;
        if(check(i , j , test , data)&& x)
        {
            delete tile[i][j];
            tile[i][j] = new TileKamienie;
        }





    }

    delete test;
}
