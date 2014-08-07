#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

const int DEFAULT_SPEED = 1;        //add to globals

class GameObject {
private:
    bool collidable;
    bool drawable;
    double speed;
    sf::Texture bodyTexture;
    sf::Sprite body;
public:
    //big four
    GameObject();
    GameObject(const sf::Texture& b);       //maybe better to have a pointer to the asset
    GameObject(const sf::Texture& b, const sf::Vector2f& coordinates);
    virtual ~GameObject() {};      //virtual?
        //...copy and assignemnt?...
    //set get
    virtual void setPosition(const sf::Vector2f& pos);
    virtual sf::Vector2f getPosition() const;
    virtual sf::Transformable& getBody();   //maybe makes other set/gets obsolete
    bool isCollidable () const;
    bool isDrawable () const;
    void setCollision(const bool& c);
    void setDrawable(const bool& d);
    double getSpeed() const;
    void setSpeed(const double& s);
    //helper
    virtual void draw(sf::RenderTarget& target); //maybe no point of being virtual?
    virtual void moveObj(const sf::Vector2f& offset);
    virtual bool collidesWith(const GameObject& obj);
    virtual void fire();
};
#endif
