//www.codewars.com/kata/52f787eb172a8b4ae1000a34/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

long zeros(long n) 
{
   int result = 0;
   for(int i = 1;i<(log10l(n)/log10l(5));++i)
      result += n/pow(5,i);
   return result;
}