#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "GameObject.h"
#include "globals.h"

const double DEFAULT_PROJECTILE_SPEED = 1.5;   //add to globals

class Projectile : public GameObject {
public:
    Projectile(const sf::Texture& b, const Direction& d);
    Projectile(const sf::Texture& b, const sf::Vector2f& coordinates, const Direction& d);
    ~Projectile();
    //set get
    Direction getDirection() const;
    void setDirection(const Direction& d);
    //helper
    void moveObj();
    //overwrite draw() to move the projectile before every draw? seemz legit
private:
    Direction direction;
};

#endif
