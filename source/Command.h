#ifndef COMMAND_H
#define COMMAND_H
#include "GameObject.h"
//include MainActor etc?

class Command {
public:
    virtual ~Command() {}
    virtual void execute(GameObject& actor) = 0;
};

#endif
