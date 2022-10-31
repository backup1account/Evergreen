#ifndef CPP_GAME_HPP
#define CPP_GAME_HPP

#include "Window.hpp"

class Game
{
    public:
    Game();
    ~Game();

    void Render();

    void Update();
    // void UpdateTime();
    void Run();

    // Window* GetWindow();

    private:
    Window m_window;
    sf::Event m_event;

    sf::Clock TimeClock;
    sf::Time DeltaTime;
};

#endif