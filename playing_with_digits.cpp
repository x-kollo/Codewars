//www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp
#include <iostream>
#include <vector>
#include <cmath>

#include <iostream>
#include <vector>
#include <cmath>

class DigPow
{
public:
  static int digPow(int n, int p)
  {
      std::vector<int> digs;
      int sum = 0;
      int tmp_n = n;
      int result = 1;
      while (tmp_n>0)
      {
          digs.push_back(tmp_n%10);
          tmp_n/=10;
      }
      for(int i = digs.size() - 1;i>=0;--i)
          sum+=pow(digs[i],p++);
      while(sum != n*result++)
            if(n*result > sum) return -1;    
      return result-1;
  }
};
