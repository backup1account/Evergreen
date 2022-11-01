#ifndef CPP_GAME_HPP
#define CPP_GAME_HPP

#include <iostream>

#include "Window.hpp"
#include "SpriteComponent.hpp"

class Game
{
    public:
    Game();
    ~Game();

    void Render();
    void Update();
    void Run();

    Window* GetWindow();

    sf::Time GetElapsedTime();
    void RestartTime();

    private:
    Window m_window;
    sf::Event m_event;

    sf::Clock m_clock;
    sf::Time m_elapsed_time;
};

#endif