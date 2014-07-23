#ifndef MAIN_ACTOR_H
#define MAIN_ACTOR_H
#include "GameObject.h"
#include <iostream>
class MainActor : public GameObject{
public:
    MainActor(int health = 3) : hp(health) {}
    ~MainActor() {}
private:
    int hp;
};

#endif
