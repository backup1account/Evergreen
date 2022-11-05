#ifndef CPP_COMPONENT_HPP
#define CPP_COMPONENT_HPP

#include <SFML/Graphics.hpp>

class I_Component
{
    public:
    virtual ~I_Component() {};

    virtual void Render(sf::RenderWindow& window) = 0;
};

#endif