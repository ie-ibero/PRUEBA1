#include <stdio.h>
#include <stdlib.h>

float calculaPi(void)
{
  float pi = 1.0; 
  int divisor = 3, i, flag = 0, num = 10000;
  //Lo hace 10000 veces para mayor exactitud
  for(i = 0; i < num; i++)
    {
      if(flag == 0)
	{
	  pi = pi - (1.0/divisor);
	  flag = 1;
	}
      else
	{
	  if(flag  == 1)
	    {
	      pi = pi + (1.0/divisor);
	      flag = 0;
	    }
	}
      divisor = divisor + 2;
    }
  pi = pi*4;
  return float;
}
