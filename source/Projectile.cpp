#include "Projectile.h"
#include <iostream>

Projectile::Projectile(const sf::Texture& b, const Direction& d) : GameObject::GameObject(b) {
    GameObject::setSpeed(DEFAULT_PROJECTILE_SPEED);
    direction = d;
}

Projectile::Projectile(const sf::Texture& b, const sf::Vector2f& coordinates, const Direction& d) : GameObject::GameObject(b, coordinates) {
    GameObject::setSpeed(DEFAULT_PROJECTILE_SPEED);
    direction = d;
}

Projectile::~Projectile() {}

Direction Projectile::getDirection() const {
    return direction;
}

void Projectile::setDirection(const Direction& d) {
    direction = d;
}

void Projectile::moveObj() {
    if (direction == NO_DIRECTION)
        return;
    else if (direction == DOWN)
        GameObject::moveObj(sf::Vector2f(0, 1));
    else if (direction == LEFT)
        GameObject::moveObj(sf::Vector2f(-1, 0));
    else if (direction == RIGHT)
        GameObject::moveObj(sf::Vector2f(1, 0));
    else if (direction == UP)
        GameObject::moveObj(sf::Vector2f(1, -1));
    else
        std::cout << "Moving projectile in impossible direction\n";
}
