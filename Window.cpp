#include "Window.hpp"


Window::Window(const sf::VideoMode& size, const std::string& title)
{
    window = std::make_unique<sf::RenderWindow>(size, title);
}


void Window::HandleEvents()
{
    while (this->window->pollEvent(this->event))
    {
        if (this->event.type == sf::Event::Closed) 
        { 
            this->window->close(); 
        }

        if (this->event.type == sf::Event::KeyPressed)
        {
            switch(this->event.key.code)
            {
                case (sf::Keyboard::Escape):
                    this->window->close();
                    break;
            }
        }
    }
}


void Window::Render()
{
    this->window->clear();
    this->window->display();
}


void Window::Update()
{
    this->HandleEvents();
}


void Window::OnCreate()
{
    while (this->window->isOpen())
    {
        this->Update();
        this->Render();
    }
}