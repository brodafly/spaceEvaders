#include <SFML/Graphics.hpp>
#include <iostream>
#include "source/GameObject.h"
#include "source/MainActor.h"
#include "source/InputHandler.h"
#include "source/InputHandler.cpp"  //remove when compiling project
#include "source/GameObject.cpp"
#include "source/EnemyActor.h"
#include "source/globals.h"
#include "source/Projectile.h"
#include "source/Projectile.cpp"
#include "source/ObjectHandler.h"
#include "source/ObjectHandler.cpp"

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
    GameObject* ptr = new MainActor(ALL_TEXTURES[HERO]);
    ptr->getBody().setPosition(225,570);
    objects.addObject(ptr);
    ptr = new EnemyActor(ALL_TEXTURES[HERO]);
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
