//www.codewars.com/kata/54c27a33fb7da0db0100040e/train/cpp

#include <cmath>
bool is_square(int n)
{
    return pow(int(sqrt(n)),2) == n ? true : false;
}