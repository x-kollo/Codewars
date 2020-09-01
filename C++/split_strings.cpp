//www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
   std::vector<std::string> v;
   if(s.size() % 2 == 0)
   {
       for(size_t i = 0;i<s.size();i+=2)
           v.push_back(s.substr(i,2));
   }
   else
   {
       for(size_t i = 0;i<s.size();i+=2)
       { 
           if(i==s.size()-1)
                v.push_back(s.substr(i,1)+"_");
           else v.push_back(s.substr(i,2));        
       }   
   }
   return v;
}