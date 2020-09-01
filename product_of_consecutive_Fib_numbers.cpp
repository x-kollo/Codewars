//www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp
#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod)
  {
     for(ull i = 0,tmp = 1;;i+=tmp,tmp+=i)
     {    
       if(i*tmp == prod) 
          return std::vector<ull>{i,tmp,1};
       else if((tmp-i)*i == prod )
         return std::vector<ull>{tmp-i,i,1};
       else if(i*tmp > prod || (tmp-i)*i > prod)
          return std::vector<ull>{tmp-i,i,0};        
     }
  }
};