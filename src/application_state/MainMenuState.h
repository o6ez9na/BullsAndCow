#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_

#include "../ui_components/components/MainMenu.h"
#include "../application_state/GameState.h"

class Application;

class MainMenuState : public IApplicationState, public IObserver
{
 private:
  Application *application_;

  MainMenu *main_menu_;

  void Invoke() override;
 public:
  explicit MainMenuState(Application *application);
  ~MainMenuState() = default;

  void Render() override;
  void UpdateEvents() override;
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
