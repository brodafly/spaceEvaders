#ifndef MOVE_DOWN_COMMAND_H
#define MOVE_DOWN_COMMAND_H
#include "Command.h"

class MoveDownCommand : public Command {
public:
    void execute(GameObject& actor) {actor.move(sf::Vector2f(0, 1));}
};

#endif
