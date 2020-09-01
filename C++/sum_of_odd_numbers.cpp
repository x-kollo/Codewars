//www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/cpp
#include <iostream>

long long rowSumOddNumbers(unsigned n)
{
    long long sum = 0;
    unsigned x = 0;
    for(unsigned i = 1;i<n;++i) x+=i;
    sum = (2*++x)-1;
    while(--n)
        sum+=(2*(++x))-1;
    return sum;
}
int main()
{
    std::cout << rowSumOddNumbers(42);
    return 0;
}