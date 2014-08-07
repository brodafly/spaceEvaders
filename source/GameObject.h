#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject {
private:
    bool collidable;
    bool drawable;
    sf::Sprite body;
public:
    //big four
    GameObject() {}
    virtual ~GameObject() {}
    GameObject(const sf::Texture& b);
    GameObject(const sf::Texture& b, const sf::Vector2f& coordinates);
    //set get
    void setPosition(const sf::Vector2f& pos);
    sf::Vector2f getPosition() const;
    sf::Sprite& getBody();
    bool isCollidable () const;
    bool isDrawable () const;
    void setCollision(const bool& c);
    void setDrawable(const bool& d);
    //helper
    virtual void draw(sf::RenderTarget& target);
    virtual bool collidesWith(const GameObject& obj);
    //abstract hacked_up shit ;{
    virtual void move(const sf::Vector2f& c) {return;}
};
#endif
