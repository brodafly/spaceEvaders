#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
//#include "FireCommand.h"

class InputHandler {
private:
    Command* buttonLeft;
    Command* buttonRight;
    Command* buttonUp;
    Command* buttonDown;
    Command* fire;
public:
    InputHandler();
    ~InputHandler();
    Command* handleInput();
    //binding methods
};

#endif
