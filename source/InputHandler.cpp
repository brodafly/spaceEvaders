#include "InputHandler.h"

InputHandler::InputHandler() {
    buttonLeft = new MoveLeftCommand;
}

InputHandler::~InputHandler() {
    delete buttonLeft;
    delete buttonRight;
}

Command* InputHandler::handleInput()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) return buttonLeft;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) return buttonRight;
    else return NULL;
}
