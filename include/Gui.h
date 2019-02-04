#ifndef GUI_H
#define GUI_H

#include <SFML/Graphics.hpp>
#include <string>
#include <GuiBot.h>
#include <GuiTop.h>
#include <Data.h>

class Gui
{
    public:

        GuiBot guibot;
        GuiTop guitop;

        sf::Texture ttlo;
        sf::Sprite stlo;

        Gui();
        virtual ~Gui();

        void draw(sf::RenderWindow *window);
        void update(sf::RenderWindow *window , Data *data);
};

#endif // GUI_H
