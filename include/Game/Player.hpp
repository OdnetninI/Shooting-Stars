#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <SFML/Graphics.hpp>
#include "Game/Plannet.hpp"

class Player {
  private:
    Plannet plannet;
    int64_t x,y;

  public:
    Player();
    Player(int64_t x, int64_t y);
    
    void setPos (int64_t x, int64_t y);

    void update(sf::Time deltatime);
    void render(sf::Time deltatime, sf::RenderWindow* window);
};

#endif /* __PLAYER_HPP__ */
