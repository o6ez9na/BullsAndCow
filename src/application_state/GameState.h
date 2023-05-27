#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_GAMESTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_GAMESTATE_H_

#include "../interfaces/IApplicationState.h"
#include "../game_engine/GameEngine.h"
#include "../subject/Subject.h"
#include "../application_state/EndGameState.h"
#include <iostream>

class Application;

class GameState : public IApplicationState {
 private:
  GameEngine *game_engine_;
  Application *application_;
  std::string CheckValue();
 public:
  Subject *on_try;

  GameState(Application *application);

  void Render() override;

  void UpdateEvents() override;
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_GAMESTATE_H_
