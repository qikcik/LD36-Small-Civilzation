#include "Gui.h"

Gui::Gui()
{
    ttlo.loadFromFile("data/tlo.png");
    stlo.setTexture(ttlo);
}

Gui::~Gui()
{
    //dtor
}

void Gui::draw(sf::RenderWindow *window)
{
    window->draw(stlo);
    guibot.draw(window);
    guitop.draw(window);

}

void Gui::update(sf::RenderWindow *window , Data *data)
{
    guitop.update(window ,data);
    guibot.update(window ,data);
}
