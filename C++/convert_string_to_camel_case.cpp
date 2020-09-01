//www.codewars.com/kata/517abf86da9663f1d2000003/cpp
#include <string>
std::string to_camel_case(std::string text)
{
   for(size_t i = 0;i<text.size();++i)
   { 
      if(text[i] == '-' || text[i] == '_')
      { 
         text[i+1] = toupper(text[i+1]);
         text.erase(i,1);
      }
   }
   return text;
}