//www.codewars.com/kata/5eda4a22f2b078000188672a/train/cpp

#include <string>

std::string decrypt(std::string message){
    std::string result;
    for(char ch : message)
      result += std::to_string(int(ch)-35);
    return result;
    
    auto a = "";
    auto b = '/0';
}