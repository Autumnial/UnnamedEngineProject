#include <SFML/window.hpp>
#include <SFML/Graphics.hpp>
#include "Scene.h"
#include <iostream>
#include <vector>
#include <Utils/Logger.h>

namespace uge
{

    class App
    {
    private:
        sf::ContextSettings settings;
        std::vector<Scene *> scenes;
        Scene *currScene;
        Logger logger{};

    public:
        static sf::RenderWindow *window;

        // todo: make it easier to reference a scene
        /**
         * Adds a scene to the list of available scenes.
         *
         * THE ORDER IN WHICH YOU ADD SCENES IS VERY IMPORTANT, PLEASE REMEMBER THIS FOR NOW
         *
         * @param scene pointer to the scene to add.
         */
        void addScene(Scene *scene)
        {
            scenes.push_back(scene);
        }

        void switchScene(int scene)
        {
            currScene = scenes[scene];
            currScene->init();
        }

        App()
        {
            Logger::loggerLevel = Logger::Level::Info;
            settings.antialiasingLevel = 8;
            window = new sf::RenderWindow(sf::VideoMode(800, 600), "Unnamed Engine Project", sf::Style::Default, settings);
        };

        void run()
        {
            while (window->isOpen())
            {
                // check all the window's events that were triggered since the last iteration of the loop
                sf::Event event;
                while (window->pollEvent(event))
                {
                    // "close requested" event: we close the window
                    if (event.type == sf::Event::Closed)
                        window->close();
                }

                // clear the window with black color
                window->clear(sf::Color::Black);

                currScene->update();
                // draw everything here...

                sf::CircleShape shape(50.f);
                shape.setFillColor(sf::Color(200, 100, 150));
                shape.setPosition((window->getSize().x / 2) - shape.getRadius(), (window->getSize().y / 2) - shape.getRadius());
                App::window->draw(shape);

                // end the current frame
                window->display();
            }
        }
    };

    sf::RenderWindow *App::window;
}