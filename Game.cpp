#include "Game.hpp"


Game::Game() : m_window(sf::VideoMode(1000, 600)) {}

Game::~Game() {}

void Game::Update()
{
    this->GetWindow()->Update();
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

        this->Update();
        this->Render();
    }
}


void Game::Render()
{
    this->GetWindow()->BeginDraw();

    // this->GetWindow()->Draw( *(component.GetSprite()) ); #1
    // this->component.Render( *(m_window.GetRenderWindow()) ); #2

    this->GetWindow()->EndDraw();
}
