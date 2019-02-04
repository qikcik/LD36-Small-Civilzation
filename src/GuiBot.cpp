#include "GuiBot.h"

GuiBot::GuiBot()
{
    tguibarbot.loadFromFile("data/guibot.png");
    sguibarbot.setTexture(tguibarbot);
    sguibarbot.setPosition(sf::Vector2f(0 , 768 -150 ));

    ticon[0].loadFromFile("data/ico1.png");
    ticon[1].loadFromFile("data/ico2.png");
    ticon[2].loadFromFile("data/ico3.png");
    ticon[3].loadFromFile("data/ico4.png");
    ticon[4].loadFromFile("data/destroy.png");

    icon[0].setTexture(ticon[0]);
    icon[1].setTexture(ticon[1]);
    icon[2].setTexture(ticon[2]);
    icon[3].setTexture(ticon[3]);
    icon[4].setTexture(ticon[4]);

    icon[0].setPosition(sf::Vector2f(20 , 638));
    icon[1].setPosition(sf::Vector2f(80 , 638));
    icon[2].setPosition(sf::Vector2f(20 , 693));
    icon[3].setPosition(sf::Vector2f(80 , 693));
    icon[4].setPosition(sf::Vector2f(150 , 643));





    tile[0] = new TileLumberjack;
    tile[1] = new TileQuarry;
    tile[2] = new TileKopalnia;
    tile[3] = new TileRopa;
    tile[4] = new TileFabryka;
    tile[5] = new TileCave;
    tile[6] = new TileWoodenhouse;
    tile[7] = new TileDom;
    tile[8] = new TileBlok;
    tile[9] = new TileBlank;
    tile[10] = new TileTree;
    tile[11] = new Tilepole;
    tile[12] = new TileKrowa;
    tile[13] = new TileSzklarnia;
    tile[14] = new TileBlank;
    tile[15] = new TileKamienie;
    tile[16] = new TileDeily1;
    tile[17] = new TileDeiity2;
    tile[18] = new TileDeity3;
    tile[19] = new TileBlank;


    font.loadFromFile("data/pricedown.ttf");
    text.setFont(font);
    text.setCharacterSize(18);
    text.setPosition(sf::Vector2f(5, 615));
    tmini = 0;
    tmax = 5;


    for(int i ; i !=5; i++){
        tile[i] -> setposition(300 + i*110 , 643);
        tile[i+5] -> setposition(300 + i*110 , 643);
        tile[i+10] -> setposition(300 + i*110 , 643);
        tile[i+15] -> setposition(300 + i*110 , 643);}

}

GuiBot::~GuiBot()
{

}

void GuiBot::draw(sf::RenderWindow *window)
{
    window->draw(sguibarbot);
    for(int i = tmini; i != tmax ;i++)
        tile[i] ->draw(window);

    for(int i = 0; i !=5 ; i++)
        window->draw(icon[i]);

    window->draw(text);
}

void GuiBot::update(sf::RenderWindow *window , Data *data)
{
    sf::Vector2f mouse(sf::Mouse::getPosition(*window));

    for(int i = tmini; i != tmax ; i++)
	if(tile[i]->stile.getGlobalBounds().contains( mouse ))
    {


        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
       {
            tile[i]->stile.setColor(sf::Color(150, 150, 150, 255));
            data->idselect = tile[i]->id;
       }
        else
        tile[i]->stile.setColor(sf::Color(255, 255, 255, 255));
    }


    for(int i=0;i!=5;i++)
	if(icon[i].getGlobalBounds().contains( mouse ))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
       {

            if(i == 0){tmini = 0;tmax= 5;}
            if(i == 1){tmini = 5;tmax= 10;}
            if(i == 2){tmini = 10;tmax= 15;}
            if(i == 3){tmini = 15;tmax= 20;}
            if(i == 4){data->idselect = 0;}
       }
    }

}

