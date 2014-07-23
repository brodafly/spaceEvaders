#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H
#include <iostream>

class GameObject {
private:
    bool collidable;
    bool drawable;
    sf::RectangleShape body; //change to sprite later
public:
    //big four
    GameObject() : collidable(true), drawable(true), body(sf::RectangleShape(sf::Vector2f (50, 50))) {}
    GameObject(const bool& c, const bool& d, const sf::RectangleShape& b) :
                collidable(c), drawable(d), body(b) {}
    virtual ~GameObject() {};      //virtual?
        //copy and asignemnt?
    //helper
    virtual void draw(sf::RenderTarget& target) {if(drawable) target.draw(body);} //maybe no point of being virtual?
    virtual void setPosition(const sf::Vector2f& pos) {body.setPosition(pos);}
    virtual sf::Transformable& getBody() {return body;}
    virtual void moveObj(const sf::Vector2f& offset) {body.move(offset.x, offset.y);}
    bool isCollidable () const  {return this->collidable;}
    bool isDrawable () const  {return this->drawable;}
};

#endif
