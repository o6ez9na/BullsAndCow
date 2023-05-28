#include "MainMenuController.h"
void MainMenuController::UpdateEvents() {
  std::cout << "Input <next> for continue or <exit> for exit =)\n";
  static std::string s;

  std::cin >> s;
  if (s == "next") {
    on_write_next->Notify();
  } else if (s == "exit") {
    abort();
  } else {
    UpdateEvents();
  }
}

MainMenuController::MainMenuController() {
  on_write_next = new Subject();
}
