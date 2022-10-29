#ifndef CPP_WINDOW_HPP
#define CPP_WINDOW_HPP

#include <memory>
#include <SFML/Graphics.hpp>


class Window
{
    public:
    Window(const sf::VideoMode& size = {1000, 600}, 
            const std::string& title = "Evergreen");

    virtual ~Window() = default;

    void HandleEvents();

    void Render();
    void Update();

    void OnCreate();

    private:
    std::unique_ptr<sf::RenderWindow> window;
    sf::Event event;
};

#endif