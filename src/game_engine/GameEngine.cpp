#include "GameEngine.h"

void GameEngine::Process(const std::string &value) {
  bulls_ = 0;
  cows_ = 0;
  for (size_t i = 0; i < value.size(); i++) {
    if (value[i] == magic_value_[i])
      bulls_++;
    else if (contained_digit_[CharToInt(value[i])]) {
      cows_++;
    }
  }
}
void GameEngine::WriteValueArray() {
  for (const auto digit : magic_value_) {
    contained_digit_[CharToInt(digit)] = true;
  }
}
int GameEngine::CharToInt(char a) {
  return a - '0';
}
GameEngine::GameEngine() {
  magic_value_ = std::to_string(GenerateMagicValue());
  contained_digit_ = new bool[10]{false};
  WriteValueArray();
}
int GameEngine::GenerateMagicValue() {
  std::srand(std::time(0));
  int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::shuffle(std::begin(digits), std::end(digits), std::mt19937(std::random_device()()));
  while (digits[0] == 0) {
    std::shuffle(std::begin(digits), std::end(digits), std::mt19937(std::random_device()()));
  }
  return digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
}
void GameEngine::Invoke() {
  attempts_left_--;
}
int GameEngine::GetAttemptsLeft() const {
  return attempts_left_;
}
int GameEngine::GetBulls() const {
  return bulls_;
}
int GameEngine::GetCows() const {
  return cows_;
}
const std::string &GameEngine::GetMagicValue() const {
  return magic_value_;
}

