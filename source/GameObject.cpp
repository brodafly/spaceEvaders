#include "GameObject.h"
GameObject::GameObject() {
    collidable = true;
    drawable = true;
    body = sf::RectangleShape(sf::Vector2f (50, 50));
}

GameObject::GameObject(const bool& c, const bool& d, const sf::RectangleShape& b) {
    collidable = c;
    drawable = d;
    body = b;
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

void GameObject::moveObj(const sf::Vector2f& offset, const double& speed) {
    body.move(offset.x * speed, offset.y * speed);
}

bool GameObject::isCollidable() const {
    return collidable;
}

bool GameObject::isDrawable() const {
    return drawable;
}

bool GameObject::collidesWith(const GameObject& obj) {
    if (!collidable)
        return false;
    return body.getGlobalBounds().intersects(obj.body.getGlobalBounds());
}
