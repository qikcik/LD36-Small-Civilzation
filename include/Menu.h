#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <Scena.h>
#include <windows.h>

class Menu
:public Scena
{
    private:


    public:
        sf::Texture texture;
        sf::Sprite sprite;
        int x;
        Menu();
        virtual ~Menu();

        virtual void draw(sf::RenderWindow *window);
        virtual int update(sf::RenderWindow *window);
};

#endif // MENU_H
