#include <iostream>
#include <fstream>
#include <cctype>
#include "funcs.h"

int main(){

  std::string s, file_code;
  int open_brackets = 0;

  std::cout << "Before: " << '\n';

  while (getline(std::cin, s)){
    std::cout << s << '\n';
    s = removeLeadingSpaces(s);
    s+="\n";

    for (int i = 0; i < open_brackets; i++){
      if (!(i == 0 && s[i] == '}'))
        file_code += '\t';
    }
    file_code += s;

    open_brackets += countChar(s, '{');
    open_brackets -= countChar(s, '}');
  }
  std::cout << "\nAfter: \n" << file_code << '\n';

  return 0;
}
