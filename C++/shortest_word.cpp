//www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp
#include <string>
#include <sstream>
int find_short(std::string str)
{ 
  std::istringstream s(str);
  size_t min = s.str().size();
  while(s >> str)
  {  
    if(str.size() < min)
       min = str.size();
  }
  return min;
}