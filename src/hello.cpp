#include <fmt/format.h>
#include <iostream>
#include "../include/adder_library.h"

int main()
{
  double a = 1.02;
  double b = -3.5;
  std::cout << fmt::format("The sum of {} and {} is: {}", a, b, math::add(a, b)) << std::endl;
}