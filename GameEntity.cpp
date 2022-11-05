#include "GameEntity.hpp"


GameEntity::GameEntity(const std::string& ID) : m_ID(ID)
{
    this->m_movement_component = nullptr;
}

GameEntity::~GameEntity()
{

}

void GameEntity::AddSpriteComponent(const std::string& filename)
{
    std::shared_ptr<SpriteComponent> temp_sprite = 
        std::make_shared<SpriteComponent>(filename);

    temp_sprite->Create(filename);
    m_components[m_ID] = temp_sprite;
}

void GameEntity::AddMovementComponent(const float& max_velocity)
{
    this->m_movement_component = std::make_shared<MovementComponent>(max_velocity);
}


void GameEntity::MoveEntity(sf::Vector2f direction, sf::Time& elapsed_t)
{
    if (this->m_components[m_ID] && this->m_movement_component)
    {
        this->m_movement_component->Move(direction, elapsed_t);

        auto new_position = this->m_movement_component->GetPosition();
        this->m_components[m_ID]->GetSprite()->setPosition(new_position);
    }
}


// void GameEntity::SetPosition(sf::Vector2f& position) 
// {
//     m_movement_component->SetPosition(position);
// }

void GameEntity::Render(sf::RenderWindow& window)
{
    for (const auto& [ key, value ] : m_components) {
        m_components[key]->Render(window);
    }
}
