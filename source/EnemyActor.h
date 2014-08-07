#ifndef ENEMY_ACTOR_H
#define ENEMY_ACTOR_H
#include "MainActor.h"

extern sf::Vector2u WINDOW_SIZE;

class EnemyActor : public MainActor {
public:
    EnemyActor(const sf::Texture& b) : MainActor::MainActor(b) {}
    ~EnemyActor() {}
};

#endif
