#include <stdio.h>

extern float suma(int a, int b);
extern float mult(int a, int b);
extern float div(int a, int b);

int main(void)
{
  int val1, val2;
  float res;
  int opc;
  
  printf(" 1-suma, 2-mult, 3-div\n");
  scanf("%d",&opc);
  getchar();
  printf("valor 1\n");
  scanf("%d",&val1);
  printf("valor 2\n");
  scanf("%d",&val2);
	
  if ( opc == 1)
    {
      res = suma(val1,val2);
    }
  else if (opc == 2)
    {
      res = mult(val1,val2);
    }
  else if (opc == 3)
    {
      res = div(val1,val2);
    }
  else
    printf ("opcion no valida \n");
  printf("el valor es %f \n",res);
  return 0;	
}
