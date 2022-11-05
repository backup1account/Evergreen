#ifndef CPP_GAMEENTITY_HPP
#define CPP_GAMEENTITY_HPP

#include <unordered_map>
#include <string>
#include <memory>
#include <SFML/Graphics.hpp>

#include "MovementComponent.hpp"
#include "SpriteComponent.hpp"

class GameEntity
{
    public:
    GameEntity() = default;
    GameEntity(const std::string& ID);
    ~GameEntity();

    void AddSpriteComponent(const std::string& filename);
    void AddMovementComponent(const float& max_velocity);

    void MoveEntity(sf::Vector2f direction, sf::Time& elapsed_t);

    void Render(sf::RenderWindow& window); // render all components

    private:
    std::string m_ID;

    std::unordered_map<std::string, std::shared_ptr<SpriteComponent>> m_components;
    std::shared_ptr<MovementComponent> m_movement_component;
};

#endif