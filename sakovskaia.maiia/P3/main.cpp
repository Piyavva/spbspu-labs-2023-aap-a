#include <iostream>
#include "string_reader.hpp"
#include "string_analysis.hpp"

int main()
{
  using namespace sakovskaia;
  char * string = nullptr;
  try
  {
    string = readString(std::cin);
  }
  catch (const std::logic_error & e)
  {
    std::cerr << e.what() << "\n";
    return 1;
  }
  size_t size = 10000;
  char * new_string = nullptr;
  try
  {
    new_string = new char[size];
  }
  catch (const std::bad_alloc & e)
  {
    std::cerr << "Fail to allocate the requested storage space\n";
    delete [] string;
    return 1;
  }
  std::cout << checkRep(string)  << "\n" << printRep(string, new_sring) << "\n";
  delete [] string;
  delete [] new_string;
  return 0;
}
