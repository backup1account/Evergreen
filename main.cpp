#include <SFML/Graphics.hpp>


int main()
{
    // SET TIMER - TICK ANIMATION

    sf::RenderWindow window(sf::VideoMode(1000, 600), "Evergreen");
    float directionX = window.getSize().x/2., directionY = window.getSize().y/2.;
    float velocity = 10.0;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(sf::Vector2f(directionX, directionY));
    sf::Vector2f position = shape.getPosition();
                

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
            { 
                window.close(); 
            }

            if (event.type == sf::Event::KeyPressed)
            {
                switch(event.key.code)
                {
                    case (sf::Keyboard::Escape):
                        window.close();
                        break;
                    
                    case (sf::Keyboard::W):
                        position.y -= velocity;
                        break;

                    case (sf::Keyboard::S):
                        position.y += velocity;
                        break;

                    case (sf::Keyboard::A):
                        position.x -= velocity;
                        break;

                    case (sf::Keyboard::D):
                        position.x += velocity;
                        break;
                }

                shape.setPosition(position);
            }

        }


        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}