#include "Game.hpp"


Game::Game() : m_window(sf::VideoMode(1000, 600))
{
    // MOVE TO ENTITY MANAGER
    m_player = std::make_shared<Player>("../Assets/star.png", 100.f);
}

Game::~Game() 
{

}

sf::Time Game::GetElapsedTime()
{
    return m_elapsed_time;
}

void Game::RestartTime()
{
    m_elapsed_time = m_clock.restart();
}

Window* Game::GetWindow()
{
    return &m_window;
}


void Game::Run()
{
    while(this->GetWindow()->IsOpen())
    {
        this->RestartTime();
        std::cout << 1.0f / this->GetElapsedTime().asSeconds() << '\n';

        this->UpdateEvent();
        this->Render();
    }
}


void Game::UpdateEvent()
{
    while (this->m_window.GetRenderWindow()->pollEvent(this->m_event))
    {
        if (this->m_event.type == sf::Event::Closed) 
        { 
            this->m_window.Destroy();
        }

        if (this->m_event.type == sf::Event::KeyPressed)
        {
            switch(this->m_event.key.code)
            {
                case (sf::Keyboard::Escape):
                    this->m_window.Destroy();
                    break;

                case (sf::Keyboard::W):
                    this->m_player->GetPlayerEntity()->MoveEntity(sf::Vector2f(0.f, -1.f), m_elapsed_time);
                    break;

                case (sf::Keyboard::S):
                    this->m_player->GetPlayerEntity()->MoveEntity(sf::Vector2f(0.f, 1.f), m_elapsed_time);
                    break;

                case (sf::Keyboard::A):
                    this->m_player->GetPlayerEntity()->MoveEntity(sf::Vector2f(-1.f, 0.f), m_elapsed_time);
                    break;

                case (sf::Keyboard::D):
                    this->m_player->GetPlayerEntity()->MoveEntity(sf::Vector2f(1.f, 0.f), m_elapsed_time);
                    break;
            }
        }
    }
}


void Game::Render()
{
    this->GetWindow()->BeginDraw();

    this->m_player->GetPlayerEntity()->Render(*(m_window.GetRenderWindow()));
    
    this->GetWindow()->EndDraw();
}
