#include "Projectile.h"

Projectile::Projectile() {
    direction = sf::Vector2f (0, -1); //up;
    speed = 1;
}

Projectile::Projectile(const sf::Vector2f& direction, const int& speed) {
    this->direction = direction;
    this->speed = speed;
}

Projectile::~Projectile() {}

void Projectile::fire() {
    GameObject::moveObj(direction, speed);
}
