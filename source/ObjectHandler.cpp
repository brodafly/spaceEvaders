#include "ObjectHandler.h"

ObjectHandler::ObjectHandler() {
    std::list<GameObject*> t;
    objects = t;
}

ObjectHandler::~ObjectHandler() {
    for (auto it = objects.begin(); it != objects.end(); ++it) {
        delete *it;
        *it = 0;
    }
}

void ObjectHandler::drawAll(sf::RenderWindow& target) {
    for (auto it = objects.begin(); it != objects.end(); ++it) {
        if ((*it)->isDrawable())
            (*it)->draw(target);
    }
}

void ObjectHandler::addObject(GameObject* obj) {
    objects.push_back(obj);
}

GameObject& ObjectHandler::getFirst() {
    return *(objects.front());
}
