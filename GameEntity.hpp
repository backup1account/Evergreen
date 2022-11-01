#ifndef CPP_GAMEENTITY_HPP
#define CPP_GAMEENTITY_HPP

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

#include "SpriteComponent.hpp"
#include "Interfaces/Component.hpp"

class GameEntity
{
    public:
    GameEntity(const std::string& ID);
    ~GameEntity();

    void AddSpriteComponent(const std::string& filename);

    void SetPosition(sf::Vector2f& position);
    void Render(); // render all components

    private:
    std::string m_ID;
    std::vector<I_Component> m_components;

    sf::Vector2f m_position;

    SpriteComponent m_single_component;
};

#endif