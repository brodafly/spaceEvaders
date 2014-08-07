#include "Actor.h"

Actor::Actor()
{
    hp = DEFAULT_HP;
}

Actor::Actor(const sf::Texture& b) : MoveableObject(b) {
    hp = DEFAULT_HP;
}

Actor::Actor(const sf::Texture& b, const sf::Vector2f& c) : MoveableObject(b, c) {
    hp = DEFAULT_HP;
}

Actor::Actor(const sf::Texture& b, const sf::Vector2f& c, const int& h) : MoveableObject(b, c) {
    hp = h;
}

Actor::~Actor()
{
}

void Actor::setHP(const int& h) {
    hp = h;
}

int Actor::getHP() const {
    return hp;
}
