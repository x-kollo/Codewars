//www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/cpp
#include <string>
#include <cctype>

class Accumul
{
public:
    static std::string accum(const std::string &s)
    {
       std::string res;
       for(size_t i = 0;i<s.size();++i)
       {
          res+=toupper(s[i]);
          for(size_t j = 0;j<i;++j)
             res+=tolower(s[i]);
          res+="-";
       }
       return res.erase(res.size()-1,1);
    }
};