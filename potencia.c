#include<stdio.h>
#include<math.h>

 long int potencia(int a,int b) {
      int x;
      int c = 1;
      for(x = 1; x <= b; x++) {
        c *= a;
      }
      return(c);
 }

