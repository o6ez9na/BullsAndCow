#ifndef BULLSANDCOWS_SRC_UI_COMPONENTS_UI_GAME_GAMEUI_H_
#define BULLSANDCOWS_SRC_UI_COMPONENTS_UI_GAME_GAMEUI_H_
#include <iostream>
#include <string>

#include "../../../interfaces/IRendered.h"
#include "../../../interfaces/IUpdatableEvents.h"
class GameUi: public IRendered{
 private:
  std::string name_;
 public:
  static void PrintFrame(const std::string &message);
  GameUi() = default;
  ~GameUi() = default;

  void Render() override;
};

#endif //BULLSANDCOWS_SRC_UI_COMPONENTS_UI_GAME_GAMEUI_H_
