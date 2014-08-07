#include "GameObject.h"

GameObject::GameObject(const sf::Texture& b) {
    collidable = true;
    drawable = true;
    speed = DEFAULT_SPEED;
    bodyTexture = b;
    body = sf::Sprite(bodyTexture);
}

GameObject::GameObject(const sf::Texture& b, const sf::Vector2f& coordinates) {
    collidable = true;
    drawable = true;
    speed = DEFAULT_SPEED;
    bodyTexture = b;
    body = sf::Sprite(bodyTexture);
    body.setPosition(coordinates);
}


void GameObject::draw(sf::RenderTarget& target) {
    if (drawable) {
        target.draw(body);
    }
    else
        return;
}

void GameObject::setPosition(const sf::Vector2f& pos) {
    body.setPosition(pos);
}

sf::Vector2f GameObject::getPosition() const {
    return body.getPosition();
}

sf::Transformable& GameObject::getBody() {
    return body;
}

void GameObject::moveObj(const sf::Vector2f& offset) {
    body.move(offset.x * speed, offset.y * speed);
}

bool GameObject::isCollidable() const {
    return collidable;
}

bool GameObject::isDrawable() const {
    return drawable;
}

void GameObject::setCollision(const bool& c) {
    collidable = c;
}

void GameObject::setDrawable(const bool& d) {
    drawable = d;
}

double GameObject::getSpeed() const {
    return speed;
}

void GameObject::setSpeed(const double& s) {
    speed = s;
}

bool GameObject::collidesWith(const GameObject& obj) {
    if (!collidable)
        return false;
    return body.getGlobalBounds().intersects(obj.body.getGlobalBounds());
}

void GameObject::fire() {
    return;
}
