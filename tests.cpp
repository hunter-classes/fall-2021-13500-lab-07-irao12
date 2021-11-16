#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Testing removeLeadingSpaces"){
  CHECK(removeLeadingSpaces("") == ""); //Edited by Ellen
  CHECK(removeLeadingSpaces("                     ") == ""); //Edited by Ellen
  CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  "); //Edited by Ellen
  CHECK(removeLeadingSpaces("test      ") == "test      "); //Edited by Ellen
  CHECK(removeLeadingSpaces("                       hello  ") == "hello  "); //Edited by Ellen
}

TEST_CASE("Testing countChar"){
  CHECK(countChar("Hello this is a test", 'r') == 0);
  CHECK(countChar("{{{sddasddaasd{{}}}}}", '{') == 5);
  CHECK(countChar("{{{sddasddaasd{{}}}}}", '}') == 5);
  CHECK(countChar("", '{') == 0);
}
