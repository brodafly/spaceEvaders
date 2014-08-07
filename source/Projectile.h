#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "MoveableObject.h"
#include "globals.h"

class Projectile : public MoveableObject {
private:
    Direction direction;
public:
    Projectile();
    Projectile(const sf::Texture& b, const Direction& d);
    Projectile(const sf::Texture& b, const sf::Vector2f& coordinates, const Direction& d);
    ~Projectile();
    //set get
    Direction getDirection() const;
    void setDirection(const Direction& d);
    //helper
    void move();
};

#endif
