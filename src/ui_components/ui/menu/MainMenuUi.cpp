#include "MainMenuUi.h"
void MainMenuUi::PrintFrame(const std::string &message) {
  int length = message.length();

  // Верхняя граница рамки
  std::cout << "+";
  for (int i = 0; i < length + 4; ++i)
  {
	std::cout << "-";
  }
  std::cout << "+" << std::endl;

  // Содержимое рамки
  std::cout << "|  ";
  std::cout << message;
  std::cout << "  |" << std::endl;

  // Нижняя граница рамки
  std::cout << "+";
  for (int i = 0; i < length + 4; ++i)
  {
	std::cout << "-";
  }
  std::cout << "+" << std::endl;
}
void MainMenuUi::Render() {
  PrintFrame(name_);
}
