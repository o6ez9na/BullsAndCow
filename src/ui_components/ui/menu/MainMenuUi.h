#ifndef BULLSANDCOWS_SRC_UI_MENU_MAINMENUUI_H_
#define BULLSANDCOWS_SRC_UI_MENU_MAINMENUUI_H_

#include <iostream>
#include <string>

#include "../../../interfaces/IRendered.h"
#include "../../../interfaces/IUpdatableEvents.h"

class MainMenuUi : public IRendered
{
 private:
  std::string name_ = "Welcome to Bulls and Cows Game!";

  void PrintFrame(const std::string &message);
 public:
  MainMenuUi() = default;
  ~MainMenuUi() = default;

  void Render() override;
};

#endif //BULLSANDCOWS_SRC_UI_MENU_MAINMENUUI_H_
