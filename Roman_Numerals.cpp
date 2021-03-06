#include "Roman_Numerals.h"

#include <map>
#include <vector>

std::vector<std::string> roman_letters = { "I", "V", "X", "L", "C", "D", "M" };

std::string get_roman_numerals(long decimal_number)
{
  std::vector<std::string> result;

  int index = 0;
  long tmp = decimal_number;

  while(tmp > 0)
  {
    std::string expression;

    // Increase efficiency
    auto rem = tmp % 10;

    if(rem == 0)
    {
      tmp = tmp / 10;
      index++;
      continue;
    }

    if(rem == 1 || rem == 2 || rem == 3)
    {
      if(index == 0)
      {
        // Remainder of 1,2,3 in the first position => repetitions of '1'
        for( int i = 0; i < rem; ++i )
          expression = expression + roman_letters[ index ];
      }
      else
      {
        // Skip over the '5' character
        for(int i = 0; i < rem; ++i)
          expression = expression + roman_letters[ index * 2 ];
      }

      result.push_back(expression);
    }
    else if (rem == 4)
    {
      // Skip over the '5' character
      expression = roman_letters[ index * 2 ] + roman_letters[ (index * 2) + 1 ];
      result.push_back(expression);
    }
    else if(rem == 5)
    {
      // Skip over the '5' character
      expression = roman_letters[ (index * 2) + 1 ];
      result.push_back(expression);
    }
    else if(rem == 6 || rem == 7 || rem == 8)
    {
      // Skip over the '5' character
      expression = roman_letters[ (index * 2) + 1 ];
      for(auto i = 0; i < rem - 5; ++i)
      {
        // Skip over the '5' character
        expression = expression + roman_letters[ (index * 2) ];
      }

      result.push_back(expression);
    }
    else if(rem == 9)
    {
      // Skip over the '5' character
      expression = roman_letters[ (index * 2) ] + roman_letters[ (index * 2) + 2 ];
      result.push_back(expression);
    }

    tmp = tmp / 10;
    index++;
  }

  std::reverse(result.begin(), result.end());
  std::string complete;
  for(auto const str : result)
    complete = complete + str;

  return complete;
}
