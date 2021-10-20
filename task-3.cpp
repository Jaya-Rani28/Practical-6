// Make a reverse of a string using reverse method and reverse_iterator of string class

#include <iostream>
#include <string>

int main ()
{
  std::string str ("\n\nnow");
  for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    std::cout << *rit;
  return 0;
}
