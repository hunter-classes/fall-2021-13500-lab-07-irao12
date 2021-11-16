#include <iostream>
#include <string>
#include <fstream>
#include "funcs.h"

std::string removeLeadingSpaces(std::string line){
  int count = 0;
  for (int i = 0; i < line.length(); i++){
    if (isspace(line[i])) count++;
    else break;
  }
  return line.substr(count);
}

int countChar(std::string line, char c){
  int count = 0;
  for (int i = 0; i < line.length(); i++){
    if (line[i] == c) count++;
  }
  return count;

}

void fixIndent (std::string file_name){
  std::cout << "FIXING " << file_name << '\n';
  std::string s, original_code, file_code;
  int open_brackets = 0;

  std::ifstream input_file;
  input_file.open(file_name);

  while (getline(input_file, s)){
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

  input_file.close();

  std::string output_name = "fixed-" + file_name;
  std::ofstream output_file;
  output_file.open(output_name);
  output_file << file_code;
  output_file.close();

  std::cout << "Before: " << original_code << '\n';
  std::cout << "\nAfter: \n" << file_code << '\n';
  return;
}
