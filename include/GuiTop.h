#ifndef GUITOP_H
#define GUITOP_H


#include <SFML/Graphics.hpp>
#include <Data.h>
#include <String>


class GuiTop
{
    public:

        sf::Texture tguibartop;
        sf::Sprite sguibartop;

        sf::Font font;
        sf::Text text[10];
        std::string www[5];

        GuiTop();
        virtual ~GuiTop();
        void draw(sf::RenderWindow *window);
        void update(sf::RenderWindow *window , Data *data);

        std::string intToStr(int n);

};

#endif // GUITOP_H
