#include "MovementComponent.hpp"

MovementComponent::MovementComponent(float max_velocity) 
    : m_max_velocity(max_velocity) 
{
    
}

void MovementComponent::SetPosition(sf::Vector2f new_position)
{
    m_position = new_position;
}

const sf::Vector2f& MovementComponent::GetPosition() const
{
    return m_position;
}

void MovementComponent::Move(sf::Vector2f direction, sf::Time& elapsed_t)
{
    this->m_position.x += this->m_max_velocity * direction.x * elapsed_t.asSeconds();
    this->m_position.y += this->m_max_velocity * direction.y * elapsed_t.asSeconds();
}

// TODO: UPDATE METHOD
