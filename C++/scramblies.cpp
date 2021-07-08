//www.codewars.com/kata/55c04b4cc56a697bb0000048/train/cpp

#include<string>
#include<map>

bool scramble(const std::string& s1, const std::string& s2)
{
    std::map<char,int> mapped_s1;
    std::map<char,int> mapped_s2;
    for(auto &el : s1)
      mapped_s1[el]++;
    for(auto &el : s2)
      mapped_s2[el]++;
    for(auto &el_s2 : mapped_s2)
    {
        bool check = true;
        for(auto &el_s1 : mapped_s1)
        {
            if(el_s1.first == el_s2.first)
            {
               if(el_s1.second < el_s2.second)
                  return false;
               else
               {
                 check = true;
                 break;
               }
            }
            else check = false;
        }
        if(!check)
            return false;
    }   
    return true;
}