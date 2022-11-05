#include "Window.hpp"


Window::Window()
{
    this->Initialize(sf::VideoMode(1000, 600), "Evergreen");
}

Window::Window(const sf::VideoMode& size)
{
    this->Initialize(size);
}

Window::~Window()
{
    this->Destroy();
}

void Window::Initialize(const sf::VideoMode& w_size, const std::string& w_title)
{
    this->m_window.create(w_size, w_title);
    this->m_window.setFramerateLimit(60);

    m_window_size = w_size;
    m_window_title = w_title;
}

void Window::Destroy()
{
    this->m_window.close();
}

sf::RenderWindow* Window::GetRenderWindow()
{
    return &m_window;
}

void Window::BeginDraw()
{
    this->m_window.clear();
}

void Window::Draw(sf::Drawable& l_drawable)
{
    this->m_window.draw(l_drawable);
}

void Window::EndDraw()
{
    this->m_window.display();
}


bool Window::IsOpen()
{
    return true ? this->m_window.isOpen() : false;
}

sf::VideoMode Window::GetWindowSize() const
{
    return m_window_size;
}