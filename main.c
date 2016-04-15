#include <stdio.h>

extern float suma(int a, int b);
extern float mult(int a, int b);
extern float sen_tay(float num, int n);

int main(void)
{
  int val1, val2, n;
  float num;
  float res;
  int opc;
  
  printf(" 1-suma, 2-mult, 3-seno\n");
  scanf("%d",&opc);
  getchar();
  if ( opc == 1)
    {
      printf("valor 1\n");
      scanf("%d",&val1);
      printf("valor 2\n");
      scanf("%d",&val2);
      res = suma(val1,val2);
    }
  else if (opc == 2)
    {
      printf("valor 1\n");
      scanf("%d",&val1);
      printf("valor 2\n");
      scanf("%d",&val2);
      res = mult(val1,val2);
    }
  else if (opc == 3)
    {
      printf("valor 1\n");
      scanf("%f",&num);
      printf("valor 2\n");
      scanf("%d",&n);
      res = sen_tay(num,n);
    }
  else
    printf ("opcion no valida \n");
  printf("el valor es %f \n",res);
  return 0;	
}
