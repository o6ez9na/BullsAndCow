#include "MainMenuState.h"
#include "../application/Application.h"
void MainMenuState::Invoke() {
  application_->SetState(new GameState(application_));
}
MainMenuState::MainMenuState(Application *application) {
  main_menu_ = new MainMenu();
  application_ = application;
  main_menu_->SubscribeToEventContinue(this);
}
void MainMenuState::Render() {
  main_menu_->Render();
}
void MainMenuState::UpdateEvents() {
  main_menu_->UpdateEvents();
}
