#include <iostream>

int main() {
  //* std::cout => prints stuff
  //? `>>` is the insertion operator. 
  int a{3};
  std::cout << "a is equal to " << a << ". How epik\n";
  //* std::cin => takes input from console
  //? `<<` is the extraction operator
  std::cout << "yo pick a numba: ";
  int num{}, num2{};
  std::cin >> num >> num2;
  std::cout << "\nnums are: " << num * num2; 
}