#include "GameObject.h"

GameObject::GameObject(const sf::Texture& b) {
    collidable = true;
    drawable = true;
    body = sf::Sprite(b);
}

GameObject::GameObject(const sf::Texture& b, const sf::Vector2f& coordinates) {
    collidable = true;
    drawable = true;
    body = sf::Sprite(b);
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

sf::Sprite& GameObject::getBody() {
    return body;
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

bool GameObject::collidesWith(const GameObject& obj) {
    if (!collidable)
        return false;
    return body.getGlobalBounds().intersects(obj.body.getGlobalBounds());
}
