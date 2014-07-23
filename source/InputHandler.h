#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H
#include "MoveLeftCommand.h"

class InputHandler {
private:
    Command* buttonLeft;
    Command* buttonRight;
    Command* fire;
public:
    InputHandler();
    ~InputHandler();
    Command* handleInput();
    //binding methods
};


#endif
