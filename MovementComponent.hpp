#ifndef CPP_MOVEMENTCOMPONENT_HPP
#define CPP_MOVEMENTCOMPONENT_HPP

#include <SFML/Graphics.hpp>

class MovementComponent
{
    public:
    MovementComponent(float max_velocity);
    ~MovementComponent() = default;

    void SetPosition(sf::Vector2f new_position);

    const sf::Vector2f& GetPosition() const;

    void Update(sf::Time& elapsed_time);

    void Move(sf::Vector2f direction, sf::Time& elapsed_t);

    private:
    sf::Vector2f m_position;
    float m_max_velocity;
};

#endif