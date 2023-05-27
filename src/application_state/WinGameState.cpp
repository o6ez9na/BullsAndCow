//
// Created by leoni on 27.05.2023.
//

#include "WinGameState.h"
#include "../application/Application.h"

WinGameState::WinGameState(Application *application, const std::string &value) {
  application_ = application;
  value_ = value;
}
void WinGameState::UpdateEvents() {
  std::cout << "\nYou are WIN\n";
  std::cout << "If you wanna try again write 'new' else 'end'\n";
  std::cout << "Write your choice:\n";
  std::string choice;
  std::cin >> choice;
  if(choice == "new")
    application_->SetState(new GameState(nullptr));
  else if(choice == "end")
    abort();
}
void WinGameState::Render() {

}
