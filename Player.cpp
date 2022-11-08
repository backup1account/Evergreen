#include "Player.hpp"

Player::Player(const std::string& filename, const float& max_velocity)
{
    m_entity = std::make_shared<GameEntity>("player");
    this->InitializeComponents(filename, max_velocity);

    this->m_entity->SetEntityPosition(sf::Vector2f(200, 200)); // dodac zmienne initial position
}

Player::~Player()
{

}


GameEntity* Player::GetPlayerEntity()
{
    return m_entity.get();
}


void Player::InitializeComponents(const std::string& filename, const float& max_velocity)
{
    this->m_entity->AddSpriteComponent(filename);
    this->m_entity->AddMovementComponent(max_velocity);
}

// TODO: TICK METHOD