//www.codewars.com/kata/5502ddd734137e90af000f62

#include <string>
std::string convertTime(int timeDiff)
{
     int secs = 0 ,mins = 0,hours = 0,days = 0;
     days = timeDiff/86400;
     hours = (timeDiff-days*86400)/3600;
     mins = (timeDiff-(days*86400)-(hours*3600))/60;
     secs = (timeDiff-(days*86400)-(hours*3600)-(mins*60));   
     return std::to_string(days) + " " +
            std::to_string(hours) + " " +
            std::to_string(mins) + " " + 
            std::to_string(secs);
}