#include "GuiTop.h"

#include <SFML/Graphics.hpp>
#include <Data.h>



GuiTop::GuiTop()
{
    tguibartop.loadFromFile("data/guitop.png");
    sguibartop.setTexture(tguibartop);
    font.loadFromFile("data/pricedown.ttf");
    for(int i = 0; i!= 5 ; i++)
    {
        text[i].setFont(font);
        text[i].setCharacterSize(50);
        text[i].setPosition(sf::Vector2f((i*190) + 50, -10));
        text[i+5].setFont(font);
        text[i+5].setCharacterSize(50);
        text[i+5].setPosition(sf::Vector2f((i*190) + 120, -10));
        text[i+5].setColor(sf::Color::Blue);
    }



}

GuiTop::~GuiTop()
{
    //dtor
}

void GuiTop::draw(sf::RenderWindow *window)
{
    window->draw(sguibartop);

    for(int i = 0; i!= 10 ; i++)
    {
        window->draw(text[i]);
    }


}

void GuiTop::update(sf::RenderWindow *window , Data *data)
{
    text[0].setString(intToStr(data->people));
    text[1].setString(intToStr(data->money));
    text[2].setString(intToStr(data->rolnictwo));
    text[3].setString(intToStr(data->przemysl));
    text[4].setString(intToStr(data->wiara));



    text[5].setString(intToStr(data->datap[0] - data->people));
    text[6].setString(intToStr(data->datap[1] - data->money));
    text[7].setString(intToStr(data->datap[2] - data->rolnictwo));
    text[8].setString(intToStr(data->datap[3] - data->przemysl));
    text[9].setString(intToStr(data->datap[4] - data->wiara));

}

std::string  GuiTop::intToStr(int n)
{
     std::string tmp, ret;
     if(n < 0) {
      ret = "-";
      n = -n;
     }
     do {
      tmp += n % 10 + 48;
      n -= n % 10;
     }
     while(n /= 10);
     for(int i = tmp.size()-1; i >= 0; i--)
      ret += tmp[i];
     return ret;
}
