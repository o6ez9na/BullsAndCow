#include "EndGameState.h"
#include "../application/Application.h"

EndGameState::EndGameState(Application *application, const std::string &value) {
  application_ = application;
  value_ = value;
}
void EndGameState::UpdateEvents() {
  std::cout << "\nYou are lose\n";
  std::cout << value_ << " is a hidden number\n";
  std::cout << "If you wanna try again write 'new' else 'end'\n";
  std::cout << "Write your choice:\n";
  std::string choice;
  std::cin >> choice;
  if(choice == "new")
    application_->SetState(new GameState(nullptr));
  else if(choice == "end")
    abort();
}
void EndGameState::Render() {

}

