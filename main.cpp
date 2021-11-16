#include <iostream>
#include <fstream>
#include <cctype>
#include "funcs.h"

int main(){

  fixIndent("bad-code.cpp");
  std::cout << '\n';
  fixIndent("bad-code2.cpp");
  
  return 0;
}
