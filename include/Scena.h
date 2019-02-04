#ifndef SCENA_H
#define SCENA_H

#include <SFML/Graphics.hpp>


class Scena
{
    public:

        Scena();
        virtual ~Scena();

        virtual void draw(sf::RenderWindow *window);
        virtual int update(sf::RenderWindow *window);
};

#endif // SCENA_H
