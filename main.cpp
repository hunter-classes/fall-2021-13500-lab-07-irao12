#include <iostream>
#include <fstream>
#include <cctype>
#include "funcs.h"

int main(){

  std::string s, original_code, file_code;
  int open_brackets = 0;

  while (getline(std::cin, s)){
    original_code += s;
    original_code += "\n";
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
  std::cout << "Before: " << original_code << '\n';
  std::cout << "\nAfter: \n" << file_code << '\n';

  return 0;
}
