#include <stdio.h>
#include <math.h>

float expo(float num)
{
  int i=2, j;
  float res,pot,fact=0;

  res = 1 + num; 
  pot = num;
  
  for(i; i < 30; i++)
    {
      fact = i;
      for(j=i-1; j!=0; j--)
	fact = fact * j;
      printf("%f:",fact);
      
      for(j=1; j != i; j++)
	pot = pot * num;
      printf("%f\n",pot);
      
      fact = pot/fact;
      res = res + fact;
    }
  
  return res;
}
