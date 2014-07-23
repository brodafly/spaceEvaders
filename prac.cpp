#include <SFML/Graphics.hpp>
#include "source/GameObject.h"
#include "source/MainActor.h"
#include "source/MoveLeftCommand.h"
#include "source/InputHandler.h"
#include "source/InputHandler.cpp"  //remove when compiling project

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::RectangleShape shape(sf::Vector2f(100, 100));
    MainActor me;
    me.getBody().setPosition(sf::Vector2f (110, 50));
    InputHandler input;
    //shape.setFillColor(sf::Color::Green);
    sf::ConvexShape polygon;
    polygon.setPointCount(3);
    polygon.setPoint(0, sf::Vector2f(0,0));
    polygon.setPoint(1, sf::Vector2f(100,0));
    polygon.setPoint(2, sf::Vector2f(50,50));
    polygon.setPosition(50, 75);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        Command* command = input.handleInput();
        if (command)
        {
            command->execute(me);
        }

        window.clear();
        me.draw(window);
        window.display();
    }

    return 0;
}
