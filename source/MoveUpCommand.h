#ifndef MOVE_UP_COMMAND_H
#define MOVE_UP_COMMAND_H
#include "Command.h"

class MoveUpCommand : public Command {
public:
    void execute(GameObject& actor) {actor.moveObj(sf::Vector2f(0, -1));}
};

#endif
