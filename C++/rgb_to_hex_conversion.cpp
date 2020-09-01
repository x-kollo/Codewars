//www.codewars.com/kata/513e08acc600c94f01000001/cpp
#include <iostream>
#include <sstream>
#include <iomanip>

class RGBToHex
{
  private:
    static std::string ith(int x)
    {
        if(x > 255) x = 255;
        if(x < 0) x = 0;
        std::stringstream s;
        s << std::showbase << std::uppercase  << std::hex << x;
        if(x <= 15) 
            return "0"+s.str();
        return s.str();
    }
  public:
  
  static std::string rgb(int r, int g, int b)
  {
      std::string result = ith(r) + ith(g) + ith(b);
      return result;
  }
};
