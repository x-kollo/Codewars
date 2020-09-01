//www.codewars.com/kata/5264d2b162488dc400000001/train/cpp
#include <string>
#include <sstream>

std::string reverseString(const std::string str)
{
    std::string result;
    for(auto it = str.crbegin(); it!=str.crend();++it)
        result+=*it;
    return result;
}
std::string spinWords(const std::string &str)
{
    std::string result;
    std::istringstream s(str);
    std::string tmp;
    while(s >> tmp)
        result += (tmp.size() >= 5 ? reverseString(tmp) : tmp) + " ";
    return result.erase(result.size()-1);
}