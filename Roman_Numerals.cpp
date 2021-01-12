#include "Roman_Numerals.h"

#include <map>
#include <vector>

std::vector<std::string> roman_letters = { "I", "V", "X", "L", "C", "D", "M" };

std::string get_roman_numerals(long decimal_number)
{
  std::vector<std::string> result1;

  int index = 0;

  long tmp = decimal_number;

  while(tmp > 0)
  {
    std::string expression;

    auto rem = tmp % 10;

    if(rem == 1 || rem == 2 || rem == 3)
    {
      if(index == 0)
      {
        for( int i = 0; i < rem; ++i )
          expression = expression + roman_letters[ index ];
      }
      else
      {
        for(int i = 0; i < rem; ++i)
          expression = expression + roman_letters[ index + 1 ];
      }

      result1.push_back(expression);
    }
    else if (rem == 4)
    {
      expression = roman_letters[ index ] + roman_letters[ index + 1 ];
      result1.push_back(expression);
    }
    else if(rem == 5)
    {
      expression = roman_letters[ index + 1 ];
      result1.push_back(expression);
    }
    else if(rem == 6 || rem == 7 || rem == 8)
    {
      expression = roman_letters[ index + 1 ];
      for(auto i = 0; i < rem - 5; ++i)
        expression = expression + roman_letters[ index ];

      result1.push_back(expression);
    }
    else if(rem == 9)
    {
      expression = roman_letters[ index ] + roman_letters[ index + 2 ];
      result1.push_back(expression);
    }

    tmp = tmp / 10;

    index++;
  }

  std::reverse(result1.begin(), result1.end());
  std::string complete;
  for(auto const str : result1)
    complete = complete + str;

  return complete;
}
