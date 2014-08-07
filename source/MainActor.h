#ifndef MAIN_ACTOR_H
#define MAIN_ACTOR_H
#include "GameObject.h"
#include "globals.h"

const int HERO_HEALTH = 3;

class MainActor : public GameObject{
public:
    MainActor();
    MainActor(const sf::Texture& b) : GameObject::GameObject(b) {hp = HERO_HEALTH;}
    ~MainActor() {}
    //set get
    int getHP() const {return hp;}
    void setHP(const int& health) {hp = health;}
    //helper
    void fire(Direction UP);
private:
    int hp;
};

#endif
