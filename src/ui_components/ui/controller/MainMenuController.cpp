#include "MainMenuController.h"
void MainMenuController::UpdateEvents() {
  std::cout << "Input <next> for continue\n";
  static std::string s;

  std::cin >> s;
  if (s == "next") {
    on_write_next->Notify();
  } else {
    UpdateEvents();
  }
}
MainMenuController::MainMenuController() {
  on_write_next = new Subject();
}
