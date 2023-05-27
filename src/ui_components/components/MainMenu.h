#ifndef BULLSANDCOWS_SRC_UI_COMPONENTS_COMPONENTS_MAINMENU_H_
#define BULLSANDCOWS_SRC_UI_COMPONENTS_COMPONENTS_MAINMENU_H_

#include "../ui/menu/MainMenuUi.h"
#include "../ui/controller/MainMenuController.h"

class MainMenu : public IRendered, public IUpdatableEvents
{
 private:
  MainMenuUi *main_menu_ui_;
  MainMenuController *main_menu_controller_;

 public:
  MainMenu();
  ~MainMenu() = default;

  void SubscribeToEventContinue(IObserver *observer);
  void Render() override;
  void UpdateEvents() override;
};

#endif //BULLSANDCOWS_SRC_UI_COMPONENTS_COMPONENTS_MAINMENU_H_
