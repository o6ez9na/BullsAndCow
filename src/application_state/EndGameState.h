#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_ENDGAMESTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_ENDGAMESTATE_H_
#include "../interfaces/IApplicationState.h"
#include <iostream>
#include <string>

class Application;

class EndGameState: public IApplicationState{
 private:
  std::string value_;
  Application *application_;
 public:
  EndGameState(Application *application, const std::string& value);

  void UpdateEvents() override;

  void Render() override;
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_ENDGAMESTATE_H_