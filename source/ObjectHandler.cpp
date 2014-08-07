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

void ObjectHandler::update() {
    auto end_it = objects.end();
    auto to_del = end_it;
    auto player_obj = objects.begin();
    for (auto it = next(player_obj, 1); it != end_it; ++it) {
        if (to_del != end_it) {
            objects.erase(to_del);
            to_del = end_it;
        }
        if ((*player_obj)->collidesWith(**it)) {
            to_del = it;
            continue;
        }
    }
    if (to_del != end_it) {
        objects.erase(to_del);
        to_del = end_it;
    }
}
