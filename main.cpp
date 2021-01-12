// Roman_Numerals.cpp : Defines the entry point for the console application.
//

#include "Roman_Numerals.h"

#include <iostream>

int main()
{
  std::string answer = get_roman_numerals(3);
  if(answer == "III")
    std::cout << "Test 1 passed\n";
  else
    std::cout << "Test 1 failed\n";

  answer = get_roman_numerals(4);
  if(answer == "IV")
    std::cout << "Test 2 passed\n";
  else
    std::cout << "Test 2 failed\n";

  answer = get_roman_numerals(5);
  if(answer == "V")
    std::cout << "Test 3 passed\n";
  else
    std::cout << "Test 3 failed\n";

  answer = get_roman_numerals(6);
  if(answer == "VI")
    std::cout << "Test 4 passed\n";
  else
    std::cout << "Test 4 failed\n";

  answer = get_roman_numerals(9);
  if(answer == "IX")
    std::cout << "Test 5 passed\n";
  else
    std::cout << "Test 5 failed\n";

  answer = get_roman_numerals(21);
  if(answer == "XXI")
    std::cout << "Test 6 passed\n";
  else
    std::cout << "Test 6 failed\n";

  return 0;
}
