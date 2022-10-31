#include "Game.hpp"


Game::Game() : m_window(sf::VideoMode(1000, 600))
{
    // wczytac teksture gracza
}

Game::~Game() {}


void Game::Update()
{
    m_window.Update();
}

// void Game::UpdateTime()
// {
//     this->DeltaTime = this->TimeClock.getElapsedTime().asSeconds();
// }

void Game::Run()
{
    while(m_window.IsOpen())
    {
        this->Update();
        this->Render();
    }
}


void Game::Render()
{
    m_window.BeginDraw();
    // m_window.Draw();
    m_window.EndDraw();
}


