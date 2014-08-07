#include "MoveableObject.h"

MoveableObject::MoveableObject() : GameObject() {
    speed = DEFAULT_SPEED;
}

MoveableObject::MoveableObject(const sf::Texture& t) : GameObject(t) {
    speed = DEFAULT_SPEED;
}

MoveableObject::MoveableObject(const sf::Texture& t, const sf::Vector2f& c) :
    GameObject(t, c)
{
    speed = DEFAULT_SPEED;
}

MoveableObject::MoveableObject(const sf::Texture& t, const sf::Vector2f& c, const double& s) :
    GameObject(t, c)
{
    speed = s;
}

MoveableObject::~MoveableObject()
{
}

double MoveableObject::getSpeed() const {
    return speed;
}

void MoveableObject::setSpeed(const double& new_speed) {
    speed = new_speed;
}

void MoveableObject::move(const sf::Vector2f& offset) {
    getBody().move(offset.x * speed, offset.y * speed);
}
