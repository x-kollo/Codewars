//www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
#include <iostream>
std::string get_middle(std::string input) 
{
  return input.size() % 2 != 0 ? 
    (std::string(1, input[input.size()/2])) :
    (std::string{ input[(input.size()/2)-1], input[input.size()/2]});
}