//www.codewars.com/kata/5aa3af22ba1bb5209f000037/train/cpp
#include <string>
#include <iostream>

std::string solve(std::string eq)
{
    std::string result;
    for(int i = eq.size()-1;i>=0;--i)
    {
       if(eq[i] == '*' || eq[i] == '+' || eq[i] == '-' || eq[i] == '/' || i == 0)
       {
            for(int j = !i ? i : i+1;j<eq.size();++j)
                result+=eq[j];
            !i ? result : result+=eq[i] ;           
            eq.erase(i,eq.size());      
       }
    }
    return result;
}