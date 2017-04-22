#ifndef __MAINGAME_HPP__
#define __MAINGAME_HPP__

#include "State/State.hpp"
#include "Game/Player.hpp"

class MainGame : public State {
  private:
    Player player;

  public:
    MainGame(sf::RenderWindow* window, EventManager* events, StateManager* states, TextMaker* textmaker);

    void update(sf::Time deltatime);
    void render(sf::Time deltatile);

    ~MainGame();
};

#endif /* __MAINGAME_HPP__ */
