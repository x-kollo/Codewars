#include <vector>
#include <numeric>

int maxSequence(const std::vector<int>& arr)
{
   int max = std::accumulate(arr.begin(),arr.end(),0);
   int step = 1;
   for(int i = 0;i<int(arr.size()-step+i);++i) 
   {
       int nmax = std::accumulate(arr.begin()+i,arr.end()-step+i,0);
       if(nmax > max) 
            max = nmax;  
       if(i == step+1)
       {
          i = -1;
          ++step;
       }
   } 
   return max;
}