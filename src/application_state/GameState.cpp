#include "GameState.h"
#include "../application/Application.h"
#include "../application_state/WinGameState.h"
#include "../ui_components/ui/game/GameUi.h"

#define LEN_ATTENTION std::cout << "\nThe number must be exactly 4 characters long. no more no less\n\n";
#define ARGUMENT_ATTENTION std::cout << "\nArgument attention\n\n"
#define TITLE "Input your number: "

GameState::GameState(Application *application) {
  application_ = application;
  game_engine_ = new GameEngine();
  on_try = new Subject();
  on_try->Add(game_engine_);
}
void GameState::Render() {
  std::cout << "         " << game_engine_->GetBulls() << " Bulls and " << game_engine_->GetCows() << " Cows\n";
  std::cout <<  "         " << game_engine_->GetAttemptsLeft() << " attempts left\n";
  if (game_engine_->GetAttemptsLeft() == 0)
    application_->SetState(new EndGameState(application_, game_engine_->GetMagicValue()));
  if (game_engine_->GetBulls() == NUMBER_LEN)
    application_->SetState(new WinGameState(application_, game_engine_->GetMagicValue()));
}
std::string GameState::CheckValue() {
  std::string value;
  std::cout << "\n";
  GameUi::PrintFrame(TITLE);
  std::cout << "|       Your number is: ";
  while (std::cin >> value) {
    if(value.size() == 4){
      if(value[0] != '0') {
        for (size_t i = 0; i < value.size(); i++) {
          if (value[i] < 58 and value[i] >= 48) {
            continue;
          } else {
            std::cout << "RLY?!";
            abort();
          }
        }
        return value;
      }
      else{
        ARGUMENT_ATTENTION;
        std::cout << "|       Your number is: ";
      }
    }
    else{
      LEN_ATTENTION;
      std::cout << TITLE;
    }
  }
}
void GameState::UpdateEvents() {
  game_engine_->Process(CheckValue());
  on_try->Notify();
}


