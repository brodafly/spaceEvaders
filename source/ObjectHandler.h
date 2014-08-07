#ifndef OBJECT_HANDLER_H
#define OBJECT_HANDLER_H
#include <list>
#include <iterator> //std::next()
#include "GameObject.h"


class ObjectHandler {
private:
    std::list<GameObject*> objects;
public:
    ObjectHandler();
    ~ObjectHandler();
    //helpers
    virtual void drawAll(sf::RenderWindow& target); //removes invalid objects and draws
    void addObject(GameObject* obj);
    GameObject& getFirst();
    void update();
};

#endif
