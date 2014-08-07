#include "Projectile.h"
#include <iostream>     //exception add later

Projectile::Projectile()
{
    direction = NO_DIRECTION;
}

Projectile::Projectile(const sf::Texture& b, const Direction& d) : MoveableObject(b) {
    direction = d;
}

Projectile::Projectile(const sf::Texture& b, const sf::Vector2f& coordinates, const Direction& d) : MoveableObject(b, coordinates) {
    direction = d;
}

Projectile::~Projectile()
{
}

Direction Projectile::getDirection() const {
    return direction;
}

void Projectile::setDirection(const Direction& d) {
    direction = d;
}

void Projectile::move() {
    if (direction == NO_DIRECTION)
        return;
    else if (direction == DOWN)
        MoveableObject::move(sf::Vector2f(0, 1));
    else if (direction == LEFT)
        MoveableObject::move(sf::Vector2f(-1, 0));
    else if (direction == RIGHT)
        MoveableObject::move(sf::Vector2f(1, 0));
    else if (direction == UP)
        MoveableObject::move(sf::Vector2f(0, -1));
    else
        std::cout << "Moving projectile in impossible direction\n";
}
