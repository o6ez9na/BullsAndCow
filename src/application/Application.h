#ifndef BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_
#define BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_
#include "../interfaces/IApplicationState.h"
#include "../application_state/MainMenuState.h"

class Application
{
 private:
  IApplicationState *state_;

  Application()
  {
    state_ = new MainMenuState(this);
  }
  ~Application() = default;

 public:
  Application(const Application &) = delete;
  Application &operator=(const Application &) = delete;
  static Application& Instance();

  [[nodiscard]] IApplicationState *GetState() const;
  void SetState(IApplicationState *state);
  void Run();
};

#endif //BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_
