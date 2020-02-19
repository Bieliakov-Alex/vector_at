/*Copyright 2020 Alex Bieliakov*/
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> vec({1, 2, 3});
  /*for (auto i : vec) {
    std::cout << i << " ";
    }*/
  /*valid index*/
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec.at(i) << " ";
  }
  std::cout << std::endl;

  /*invalid index*/
  try {
    std::cout << vec.at(3) << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
