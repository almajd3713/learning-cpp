#include "fileDefinitions.hpp"
#include <iostream>

//! There are two cases to "forward a function/statement":
//!   - if it's defined after it was called
//!   - if it was defined in another file (you can use a header `.hpp` file instead for this)
//! here, we have forwarded complexCalc() and imported the aloo() declaration from the header file
int complexCalc(int a, int b, int c);

int main() {
  aloo();
  int a, b, c;
  std::cout << "Enter Numbers: ";
  std::cin >> a >> b >> c;
  int d{complexCalc(a, complexCalc(a, b, b), c)};
  std::cout << "\nFinal Number is: " << d;
  return 0;
}