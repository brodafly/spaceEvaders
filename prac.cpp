#include <SFML/Graphics.hpp>
#include <iostream>
#include "source/GameObject.h"
#include "source/GameObject.cpp"
#include "source/MoveableObject.h"
#include "source/MoveableObject.cpp"
#include "source/InputHandler.h"
#include "source/InputHandler.cpp"
#include "source/Projectile.h"
#include "source/Projectile.cpp"
#include "source/ObjectHandler.h"
#include "source/ObjectHandler.cpp"
#include "source/globals.h"
#include "source/Actor.h"
#include "source/Actor.cpp"

//automate later
void loadTextures(std::vector<sf::Texture>& textures) {         //consider returning bool
    sf::Texture t;
    if (!t.loadFromFile("assets/Untitled.png")) {
        //throw some exception later
        std::cout << "Can't load a texture lololololol\n";
        return;
    }
    textures.push_back(t);
    if (!t.loadFromFile("assets/Bullet.png")) {
        //throw some exception later
        std::cout << "Can't load a texture lololololol\n";
        return;
    }
    textures.push_back(t);
}

//automate later
void loadLevel(ObjectHandler& objects) {
    GameObject* ptr = new Actor(ALL_TEXTURES[HERO]);
    ptr->getBody().setPosition(225,570);
    objects.addObject(ptr);
    ptr = new Actor(ALL_TEXTURES[HERO]);
    objects.addObject(ptr);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 640), "SFML works!");
    window.setFramerateLimit(120);

    loadTextures(ALL_TEXTURES);
    ObjectHandler objects;

    loadLevel(objects);

    InputHandler input;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        Command* command = input.handleInput();
        if (command)
        {
            command->execute(objects.getFirst());
        }
        window.clear();
        objects.drawAll(window);
        window.display();
    }
    return 0;
}
