#include "GameEntity.hpp"


GameEntity::GameEntity(const std::string& ID) : m_ID(ID)
{

}

GameEntity::~GameEntity()
{

}

// "../Assets/star.png"

void GameEntity::AddSpriteComponent(const std::string& filename)
{
    m_single_component.Create(filename);
    m_components.push_back(m_single_component);
}

void GameEntity::SetPosition(sf::Vector2f& position) : m_position(position)
{

}

void GameEntity::Render()
{

}

