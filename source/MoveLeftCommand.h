#ifndef MOVE_LEFT_COMMAND_H
#define MOVE_LEFT_COMMAND_H
#include "Command.h"

class MoveLeftCommand : public Command {
public:
    void execute(GameObject& actor) {actor.moveObj(sf::Vector2f(-1, 0));}
};

#endif
