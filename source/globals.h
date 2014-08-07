#ifndef GLOBALS_H
#define GLOBALS_H
#include <vector>

const double DEFAULT_SPEED = 1;
const int DEFAULT_HP = 1;
enum Direction {NO_DIRECTION, DOWN, LEFT, RIGHT, UP};
enum Textures {HERO, BULLET}; //ENEMY_1, ENEMY_2...
std::vector<sf::Texture> ALL_TEXTURES;      //global, main or !static! for GameObj?


#endif
