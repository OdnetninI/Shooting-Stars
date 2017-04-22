#ifndef __PLANNET_HPP__
#define __PLANNET_HPP__

#include <SFML/Graphics.hpp>
#include <vector>

class Asteroids {
  private:
    int64_t x, y; // Relative to Plannet
    sf::Texture* texture;
    sf::Sprite sprite;

  public:

};

class Plannet {
  private:
    int64_t x, y;
    std::vector<Asteroids*> asteroids;

  public:
    Plannet();

    void addAsteroid(int64_t relx, int64_t rely, sf::Texture* texture);
};

#endif /* __PLANNET_HPP__ */
