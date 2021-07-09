//www.codewars.com/kata/556deca17c58da83c00002db/train/c

#include <stdlib.h>

long long *tribonacci(const long long signature[3], size_t n)
{
    if(n==0)  return NULL;
    long long *result = (long long*)malloc(sizeof(long long)*n);
    for(int i = 0;i<n;++i)
    {
        if(i<=2)
          result[i] = signature[i];
        else
        {
            long long next = 0;
            for(int j = 0;j<3;++j)
                next += result[i-3+j];
            result[i] = next;
        }
    }
    return result;
}