//www.codewars.com/kata/54da5a58ea159efa38000836/train/cpp

#include <vector>
#include <map>

int findOdd(const std::vector<int>& numbers)
{
    std::map<int, int> m;
    for(const auto & el : numbers)
        m[el]++;
    for(auto & el : m)
        if(el.second % 2 != 0) { return el.first; }
}