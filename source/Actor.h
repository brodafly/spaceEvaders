#ifndef ACTOR_H
#define ACTOR_H
#include "MoveableObject.h"
#include "globals.h"

class Actor : public MoveableObject {
private:
    int hp;
public:
    Actor();
    ~Actor();
    Actor(const sf::Texture& t);
    Actor(const sf::Texture& t, const sf::Vector2f& c);
    Actor(const sf::Texture& t, const sf::Vector2f& c, const int& h);
    //set get
    int getHP() const;
    void setHP(const int& h);
};

#endif
