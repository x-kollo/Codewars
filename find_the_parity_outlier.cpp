//www.codewars.com/kata/5526fc09a1bbd946250002dc/train/cpp
#include <iostream>
#include <vector>

int FindOutlier(std::vector<int> arr)
{
    int odd_count = 0;
    int even_count = 0;
    int odd, even;
    for(auto el : arr)
    {
        el % 2 == 0 ? (++even_count, even = el) : (++odd_count, odd = el);
        if(odd_count > 1 && even_count != 0)
           return even;
        if(even_count > 1 && odd_count != 0)
           return odd;
    }
}