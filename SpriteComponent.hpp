#ifndef CPP_SPRITECOMPONENT_HPP
#define CPP_SPRITECOMPONENT_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Interfaces/Component.hpp"

class SpriteComponent : public I_Component
{
    public:
    SpriteComponent() = default;
    SpriteComponent(const std::string& filename);
    ~SpriteComponent();

    void Create(const std::string& filename);
    void Render(sf::RenderWindow& window);

    void Tick();

    // sf::Sprite* GetSprite();

    private:
    void Initialize(const std::string& filename);

    private:
    sf::Texture m_texture;
    sf::Sprite m_sprite;
};

#endif