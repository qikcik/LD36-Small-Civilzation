#ifndef PLAY_H
#define PLAY_H


#include <Scena.h>
#include <Gui.h>
#include <Map.h>
#include <Data.h>



class Play
:public Scena
{
    public:

        Map mapa;
        Gui gui;
        Data data;

        sf::Texture texture;
        sf::Sprite sprite;

        Play();
        virtual ~Play();

        virtual void draw(sf::RenderWindow *window);
        virtual int update(sf::RenderWindow *window );
};

#endif // PLAY_H
