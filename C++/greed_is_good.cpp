//www.codewars.com/kata/5270d0d18625160ada0000e4/train/cpp
#include <iostream>
#include <vector>
#include <map>
int score(const std::vector<int>& dice)
{
    int res = 0;
    std::map<int,int> m;
    for(const int & el : dice)
        m[el]++;
    for(auto & it : m)
    {
        if((3 % it.second == 3 || it.second == 3))
        {
            it.first == 1 ? res+=1000 : res+=it.first*100;
            it.second-=3;
        }
        if(it.first == 1 || it.first == 5)
            res+=(it.second)*(it.first == 1?100:50);  
    }      
    return res;
}
int main()
{
    std::cout << score({2, 3, 4, 6, 2});
    return 0;
}