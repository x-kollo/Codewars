//www.codewars.com/kata/57b06f90e298a7b53d000a86/train/c

int queue_time(const int *customers, int customers_length, int n)
{
    int time = 0;
    int pos = 0;
    int* till = (int*)malloc(sizeof(int)*n);
      for(int i = 0;i<n && i<customers_length;++i)
    till[i] = customers[i];
    pos+=n;
    while(1)
    {
      int min = 0;
      for(int i = 0;i<n && i<customers_length;++i)
      {
         if((till[i] > 0 && min == 0) || (till[i] < min && till[i] > 0))
            min = till[i];
      }
      if(min == 0 && pos >= n)
          break;
      
      for(int i = 0;i<n;++i)
      {
          if(till[i] > 0)
            till[i] -= min;
      }   
      
      int j = 0; 
      for(int i = 0;i<n;++i)
      {
         if(till[i] == 0 && pos < customers_length-j)
            till[i] = customers[pos+j++];
      } 
      time += min;
      pos+=j;
    }
    free(till);
    return time;
}