#include <iostream>

consteval int get_value()
{
  return __cplusplus;
}

int main()
{

  constexpr int value = get_value();

  std::cout << "C++ 20: " << value << std::endl;

  return 0;
}