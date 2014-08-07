#ifndef MOVABLE_OBJECT_H
#define MOVABLE_OBJECT_H
#include "GameObject.h"
#include "globals.h"

class MoveableObject : public GameObject {
private:
    double speed;
public:
    MoveableObject();
    MoveableObject(const sf::Texture& t);
    MoveableObject(const sf::Texture& t, const sf::Vector2f& c);
    MoveableObject(const sf::Texture& t, const sf::Vector2f& c, const double& speed);
    ~MoveableObject();
    //set get
    double getSpeed() const;
    void setSpeed(const double& new_speed);
    //helper
    virtual void move(const sf::Vector2f& offset);
};

#endif
