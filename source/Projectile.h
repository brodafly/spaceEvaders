#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "GameObject.h"
class Projectile : public GameObject {
public:
    Projectile();
    Projectile(const sf::Vector2f& direction, const int& speed = 1);
    ~Projectile();
    void fire();
private:
    double speed;
    sf::Vector2f direction;
};

#endif
