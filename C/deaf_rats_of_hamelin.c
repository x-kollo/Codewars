//www.codewars.com/kata/598106cb34e205e074000031/train/c
#include <string.h>
int countDeafRats(const char *town)
{
    int p_pos = 0;
    int deaf_rats = 0;
    for(int i = 0;i<strlen(town);++i)
    {
        if(town[i] == 'P')
          p_pos = i;
    }   
    for(int i = 0;i<p_pos;++i)
    {
        if(town[i] == ' ')
            continue;
        if(town[i] == 'O' && town[i+1] == '~')
          deaf_rats++;
         ++i;
    }
    for(int i = p_pos+1;i<strlen(town)-1;++i)
    {
        if(town[i] == ' ')
            continue;
        if(town[i] == '~' && town[i+1] == 'O')
          deaf_rats++;
        ++i;
    }
    return deaf_rats;
}