//
// Created by leoni on 27.05.2023.
//

#include "GameUi.h"
void GameUi::PrintFrame(const std::string &message) {
  std::string sub_name = "Welcome to Bulls and Cows Game!";
  int len_right_and_left_frames = (sub_name.size()- message.size() + 4 )/2;
  std::cout << "|";
  for (size_t i = 0; i < len_right_and_left_frames; i++)
    std::cout << " ";
  std::cout << message;
  for (size_t i = 0; i < len_right_and_left_frames; i++)
    std::cout << " ";
  std::cout << "|" << std::endl;
}
void GameUi::Render() {
  PrintFrame(name_);
}
