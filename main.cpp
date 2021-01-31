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

  answer = get_roman_numerals(7);
  if(answer == "VII")
    std::cout << "Test 5 passed\n";
  else
    std::cout << "Test 5 failed\n";

  answer = get_roman_numerals(8);
  if(answer == "VIII")
    std::cout << "Test 6 passed\n";
  else
    std::cout << "Test 6 failed\n";

  answer = get_roman_numerals(9);
  if(answer == "IX")
    std::cout << "Test 7 passed\n";
  else
    std::cout << "Test 7 failed\n";

  answer = get_roman_numerals(21);
  if(answer == "XXI")
    std::cout << "Test 8 passed\n";
  else
    std::cout << "Test 8 failed\n";

  answer = get_roman_numerals(30);
  if(answer == "XXX")
    std::cout << "Test 9 passed\n";
  else
    std::cout << "Test 9 failed\n";

  answer = get_roman_numerals(39);
  if(answer == "XXXIX")
    std::cout << "Test 10 passed\n";
  else
    std::cout << "Test 10 failed\n";

  answer = get_roman_numerals(40);
  if(answer == "XL")
    std::cout << "Test 11 passed\n";
  else
    std::cout << "Test 11 failed\n";

  answer = get_roman_numerals(50);
  if(answer == "L")
    std::cout << "Test 12 passed\n";
  else
    std::cout << "Test 12 failed\n";

  answer = get_roman_numerals(60);
  if(answer == "LX")
    std::cout << "Test 13 passed\n";
  else
    std::cout << "Test 13 failed\n";

  answer = get_roman_numerals(70);
  if(answer == "LXX")
    std::cout << "Test 14 passed\n";
  else
    std::cout << "Test 14 failed\n";

  answer = get_roman_numerals(80);
  if(answer == "LXXX")
    std::cout << "Test 15 passed\n";
  else
    std::cout << "Test 15 failed\n";

  answer = get_roman_numerals(90);
  if(answer == "XC")
    std::cout << "Test 16 passed\n";
  else
    std::cout << "Test 16 failed\n";

  answer = get_roman_numerals(10);
  if(answer == "X")
    std::cout << "Test 17 passed\n";
  else
    std::cout << "Test 17 failed\n";

  answer = get_roman_numerals(100);
  if(answer == "C")
    std::cout << "Test 18 passed\n";
  else
    std::cout << "Test 18 failed\n";

  answer = get_roman_numerals(123);
  if(answer == "CXXIII")
    std::cout << "Test 19 passed\n";
  else
    std::cout << "Test 19 failed\n";

  answer = get_roman_numerals(500);
  if(answer == "D")
    std::cout << "Test 20 passed\n";
  else
    std::cout << "Test 20 failed\n";

  answer = get_roman_numerals(1000);
  if(answer == "M")
    std::cout << "Test 21 passed\n";
  else
    std::cout << "Test 21 failed\n";

  answer = get_roman_numerals(2000);
  if(answer == "MM")
    std::cout << "Test 22 passed\n";
  else
    std::cout << "Test 22 failed\n";

  return 0;
}
