#include "SpriteComponent.hpp"


SpriteComponent::SpriteComponent(const std::string& filename)
{
    this->Initialize(filename);
}

SpriteComponent::~SpriteComponent() {}


void SpriteComponent::Initialize(const std::string& filename)
{
    if (!m_texture.loadFromFile(filename))
    {
        std::cerr << "Failed to load image" << '\n';
        exit(1);
    }

    m_sprite.setTexture(m_texture);
    m_sprite.setPosition(200, 200);  // delete later
    m_sprite.scale(sf::Vector2f(0.25, 0.25)); // delete later
}

void SpriteComponent::Create(const std::string& filename)
{
    this->Initialize(filename);
}

void SpriteComponent::Render(sf::RenderWindow& window)
{
    window.draw(m_sprite);
}

// sf::Sprite* SpriteComponent::GetSprite()
// {
//     return &m_sprite;
// }