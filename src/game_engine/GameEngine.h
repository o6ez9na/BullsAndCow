#ifndef BULLSANDCOWS_SRC_GAME_ENGINE_GAMEENGINE_H_
#define BULLSANDCOWS_SRC_GAME_ENGINE_GAMEENGINE_H_

#include "../interfaces/IObserver.h"
#include <iostream>
#include <random>
#include <string>
#include <ctime>
#include <algorithm>
#include <random>

#define ATTEMPTS_LEFT 15
#define NUMBER_LEN 4

class GameEngine: public IObserver{
 private:

  int bulls_ = 0;
  int cows_ = 0;
  int attempts_left_ = ATTEMPTS_LEFT;
  bool *contained_digit_ = nullptr;
  std::string magic_value_;

  int GenerateMagicValue();
  void WriteValueArray();
  int CharToInt(char a);
 public:
  GameEngine();

  [[nodiscard]] int GetBulls() const;
  [[nodiscard]] int GetCows() const;
  [[nodiscard]] int GetAttemptsLeft() const;
  [[nodiscard]] const std::string &GetMagicValue() const;

  void Process(const std::string& value);

  void Invoke() override;
};

#endif //BULLSANDCOWS_SRC_GAME_ENGINE_GAMEENGINE_H_
