#include "Application.h"
IApplicationState *Application::GetState() const
{
  return state_;
}
void Application::SetState(IApplicationState *state)
{
  state_ = state;
}
Application &Application::Instance() {
  static auto *application = new Application();
  return *application;
}
void Application::Run() {
  while (true)
  {
	state_->Render();
	state_->UpdateEvents();
  }
}

