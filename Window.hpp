#ifndef CPP_WINDOW_HPP
#define CPP_WINDOW_HPP

#include <memory>
#include <SFML/Graphics.hpp>

class Window
{
    public:
    Window();
    Window(const sf::VideoMode& size);
    ~Window();

    void HandleEvents();

    void BeginDraw();
    void Draw(sf::Drawable& l_drawable);
    void EndDraw();

    void Update();

    bool IsOpen();

    sf::RenderWindow* GetRenderWindow(); // ?
    sf::VideoMode GetWindowSize() const;

    private:
    void Initialize(const sf::VideoMode& w_size, 
            const std::string& w_title = "Evergreen");
    void Destroy();

    private:
    sf::RenderWindow m_window;
    sf::VideoMode m_window_size;
    std::string m_window_title;

    sf::Event m_event;
};

#endif