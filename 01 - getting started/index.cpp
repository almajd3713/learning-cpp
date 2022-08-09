//* includes a library from the standard C++ lib. `iostream` is 
#include <iostream>

//* inits the main function. All code must be inside this one
//! notice that it starts with int. This is because it returns an int, so declaring values starts with the return type
int main() {
  //* prints chars, more on it in 02
  std::cout << "Hello There\n";

  //* you can init in multiple ways
  int x = 4;
  double y(4.4);
  int d{9};
  int e{}; // inits to 0
  //* best way is the last one
  std::cout << e;
  

  //* all programs must end with a return. 0 means went well
  return 0;
}
//! and of course, all statement lines must end with a semicolon;