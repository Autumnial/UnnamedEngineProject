#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600), "sfml sure is running yall", sf::Style::Default, settings);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        sf::CircleShape shape(50.f);
        shape.setFillColor(sf::Color(200, 100, 150));
        shape.setPosition((window.getSize().x / 2) - shape.getRadius(), (window.getSize().y / 2) - shape.getRadius());
        window.draw(shape);

        // end the current frame
        window.display();
    }

    return 0;
}