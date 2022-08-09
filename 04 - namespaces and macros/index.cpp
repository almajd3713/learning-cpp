#include <iostream>
//* instead of using std::cout, we can use the namespace `std` 
//! it's better to avoid doing this. Namespaces were made for a reason
using namespace std;

//* during compilation, you can add macros to define when stuff would get compiled or not
#define BRUH

int main() {
  cout << "Ayy";

  // this macro is defined, so the code inside will compile
  #ifdef BRUH
    cout << "BRUH is defined !";
  #endif
  // this macro is not defined, so the code inside will be ignored
  #ifdef SIS
    cout << "SIS is defined !";
  #endif

  //* a nice trick is to use ifdef 0 in order to write code that will be ignored either way, nice way to write example code

  #if 0
    cout << "This code won't be compiled !"
  #endif
  return 0;
}
//! macros aren't cross-files, so only declare em where you use em