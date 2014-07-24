#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject {
private:
    bool collidable;
    bool drawable;
    sf::RectangleShape body; //change to sprite later
public:
    //big four
    GameObject();
    GameObject(const bool& c, const bool& d, const sf::RectangleShape& b);
    virtual ~GameObject() {};      //virtual?
        //...copy and assignemnt?...
    //set get
    virtual void setPosition(const sf::Vector2f& pos);
    virtual sf::Vector2f getPosition() const;
    virtual sf::Transformable& getBody();   //maybe makes other set/gets obsolete
    bool isCollidable () const;
    bool isDrawable () const;
    //helper
    virtual void draw(sf::RenderTarget& target); //maybe no point of being virtual?
    virtual void moveObj(const sf::Vector2f& offset, const double& speed = 1);
    virtual bool collidesWith(const GameObject& obj);
};
#endif
