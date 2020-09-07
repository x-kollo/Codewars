//www.codewars.com/kata/530e15517bc88ac656000716/cpp
#include <string>

std::string rot13(std::string msg)
{
    for(char & ch : msg)
    {
        if(ispunct(ch) || isspace(ch) || isdigit(ch))
            continue;
        if(islower(ch) && !isspace(ch))
            int(ch) + 13 > 122 ? (ch = char(((int(ch)+13)-122)+96)) : (ch = char(ch+13));
        else 
            int(ch) + 13 > 90 ? (ch = char(((int(ch)+13)-90)+64)) : (ch = char(ch+13));
    }
    return msg;
}
