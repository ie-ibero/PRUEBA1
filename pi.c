#include <stdio.h>
#include <stdlib.h>

int calculaPi(int num)
{
  float pi = 1, divisor = 3, i, flag = 0;
  for(i = 0; i < num; i++)
    {
      if(flag == 0)
	{
	  pi = pi - (1.0/divisor);
	  printf("%f %f\n", divisor, pi);
	  flag = 1;
	}
      else
	{
	  if(flag  == 1)
	    {
	      pi = pi + (1.0/divisor);
	      printf("%f %f\n", divisor, pi);
	      flag = 0;
	    }
	}
      divisor = divisor + 2;
    }
  pi = pi*4;
  printf("%f\n", pi);
}
