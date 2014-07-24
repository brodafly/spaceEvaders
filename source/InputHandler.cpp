#include "InputHandler.h"

InputHandler::InputHandler() {
    buttonLeft = new MoveLeftCommand;
    buttonRight = new MoveRightCommand;
    buttonUp = new MoveUpCommand;
    buttonDown = new MoveDownCommand;
}

InputHandler::~InputHandler() {
    delete buttonLeft;
    delete buttonRight;
    delete buttonUp;
    delete buttonDown;
}

Command* InputHandler::handleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) return buttonLeft;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) return buttonRight;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) return buttonDown;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) return buttonUp;
    else return NULL;
}
