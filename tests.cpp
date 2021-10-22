#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"



TEST_CASE("Testing removeLeadingSpaces"){
  CHECK(removeLeadingSpaces("")== "");
  CHECK(removeLeadingSpaces("                     ")== "");
  CHECK(removeLeadingSpaces("       int x = 1;  ")== "int x = 1;  ");
  CHECK(removeLeadingSpaces("test      ")== "test      ");
  CHECK(removeLeadingSpaces("                       hello  ")== "hello  ");
}

TEST_CASE("Testing countChar"){
  CHECK(countChar("Hello this is a test", 'r') == 0);
  CHECK(countChar("{{{sddasddaasd{{}}}}}", '{') == 5);
  CHECK(countChar("{{{sddasddaasd{{}}}}}", '}') == 5);
}
