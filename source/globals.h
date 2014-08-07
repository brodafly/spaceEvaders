#ifndef GLOBALS_H
#define GLOBALS_H
#include <vector>

enum Direction {NO_DIRECTION, DOWN, LEFT, RIGHT, UP};
enum Textures {HERO}; //ENEMY_1, ENEMY_2...
std::vector<sf::Texture> ALL_TEXTURES;      //global, main or !static! for GameObj?


#endif
