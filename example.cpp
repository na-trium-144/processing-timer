#include "ptimer.hpp"
#include <iostream>

int main() {
  auto t = ptimer::ptimer([] {
    for (int i = 0; i < 10000; i++)
      ;
  });
  std::cout << t << " ns" << std::endl;
}