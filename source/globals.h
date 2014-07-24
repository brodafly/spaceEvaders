#ifndef GLOBALS_H
#define GLOBALS_H

sf::Vector2u WINDOW_SIZE;

inline void update_window_size(sf::RenderWindow& window)
{
    WINDOW_SIZE = window.getSize();
}
#endif
