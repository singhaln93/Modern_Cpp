#include <iostream>
#include <vector>

void say_hello();

int main()
{
#ifdef DEBUG
  say_hello();
#endif
  return 0;
}

void say_hello() { std::cout << "Hello World!" << std::endl; }