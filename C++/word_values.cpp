//www.codewars.com/kata/598d91785d4ce3ec4f000018/train/cpp

#include <vector>
#include <string>

std::vector<int> wordValue(std::vector <std::string> arr)
{
	  std::vector<int> result;
    int sum = 0;
    for(size_t i = 0;i<arr.size();++i)
    {
        for(char ch : arr[i])
        {
           if(!isspace(ch) && islower(ch))
             sum+=int(ch)-96;
           else if(!isspace(ch) && isupper(ch))
             sum+=int(ch)-64;
        }
        result.push_back(sum*(i+1));
        sum = 0;
    }
    return result;
}