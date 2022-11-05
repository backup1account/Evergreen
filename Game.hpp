#ifndef CPP_GAME_HPP
#define CPP_GAME_HPP

#include <iostream>

#include "Window.hpp"
#include "SpriteComponent.hpp"
#include "GameEntity.hpp"

class Game
{
    public:
    Game();
    ~Game();

    void Render();
    void UpdateEvent();
    void Run();

    Window* GetWindow();

    sf::Time GetElapsedTime();
    void RestartTime();

    private:
    Window m_window;
    sf::Event m_event;

    sf::Clock m_clock;
    sf::Time m_elapsed_time;

    GameEntity m_test_component;
};

#endif