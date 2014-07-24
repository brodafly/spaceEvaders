#ifndef ENEMY_ACTOR_H
#define ENEMY_ACTOR_H
#include "MainActor.h"

extern sf::Vector2u WINDOW_SIZE;

class EnemyActor : public MainActor {
public:
    EnemyActor(int health = 1) : MainActor::MainActor(health) {}
    ~EnemyActor() {}
};

#endif
