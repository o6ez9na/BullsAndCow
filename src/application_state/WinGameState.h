//
// Created by leoni on 27.05.2023.
//

#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_WINGAMESTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_WINGAMESTATE_H_

#include "../interfaces/IApplicationState.h"
#include <iostream>
#include <string>
class Application;

class WinGameState:public IApplicationState {
 private:
  std::string value_;
  Application *application_;
 public:
  WinGameState(Application *application, const std::string& value);

  void UpdateEvents() override;

  void Render() override;
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_WINGAMESTATE_H_
