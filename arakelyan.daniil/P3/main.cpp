#include <exception>
#include <iostream>
#include <cctype>
#include <stdexcept>
#include "inputArray.hpp"
#include "taskOne.hpp"

int main()
{
  size_t arrSize = 0;
  char * taskOneString = nullptr;

  // size_t arrSizeTaskTwo = 0;
  char * taskTwoStringOne = nullptr;
  char * taskTwoStringTwo = nullptr;

  try
  {
    taskOneString = ara::inputArray(arrSize);
    // taskTwoStringOne = ara::inputArray(arrSizeTaskTwo);
    // taskTwoStringTwo = ara::inputArray(arrSizeTaskTwo);
  }
  catch (const std::exception & e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    delete [] taskOneString;
    delete [] taskTwoStringOne;
    delete [] taskTwoStringTwo;
    return 1;
  }

  // std::cout << "arrSize task 1 - " << arrSize << "\n";
  // std::cout << "arrSize task 2 - " << arrSizeTaskTwo << "\n";
  std::cout << "taks 1 str - " << taskOneString << "\n";
  // std::cout << "taks 2 str 1 - " << taskTwoStringOne << "\n";
  // std::cout << "taks 2 str 2 - " << taskTwoStringTwo << "\n";

  size_t answerTaskOne = 0;
  answerTaskOne = ara::countOfdifferentLetters(taskOneString, arrSize);

  std::cout << "Answer on task 1: " << answerTaskOne << "\n";

  return 0;
}
