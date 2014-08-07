#include "ObjectHandler.h"

ObjectHandler::ObjectHandler() {
    std::list<GameObject*> t;
    objects = t;
}

ObjectHandler::~ObjectHandler() {
    for (auto& elem : objects) {
        delete elem;
        elem = nullptr;
    }
}

void ObjectHandler::drawAll(sf::RenderWindow& target) {
    for (auto& elem : objects) {
        if (elem->isDrawable())
            elem->draw(target);
    }
}

void ObjectHandler::addObject(GameObject* obj) {
    objects.push_back(obj);
}

GameObject& ObjectHandler::getFirst() {
    return *(objects.front());
}
