#include <iostream>
#include <string>
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
