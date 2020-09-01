//www.codewars.com/kata/51e04f6b544cf3f6550000c1/train/cpp
#include <cmath>
#include <iostream>
int beeramid(int bonus, double price)
{
    int lvl = 0;
    for(double d_bonus = bonus;
        d_bonus-(pow(lvl+1,2)*price) >= 0.0;
        d_bonus-=pow(++lvl,2)*price);
    return lvl;
}