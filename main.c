#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/** 
extern float suma(int a, int b);
extern float resta(int a, int b);
extern float mult(int a, int b); 
extern float expo(float a);
extern float calculaPi(void);
extern long int potencia(int a, int b);
extern float coseno(float a);
extern float division(int a, int b);
extern float serietaylor(float a, int b);
extern int menu(void);
 **/

int main(void) {
    int val1, val2;
    float f1;
    float res=0.0;
    long int res_potencia = 0;
    int opc;

    system("clear");
    
    while(opc != 10) {
        opc = menu();
        system("clear");
        printf(" opcion: %d \n",opc);
        switch (opc) {
            case 1:
                printf("\tSUMA\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%d",&val2);
                res = suma(val1,val2);
                printf("La suma es %f\n",res);
                break;
            case 2:
                printf("\tRESTA\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%d",&val2);
                res = resta(val1,val2);
                printf("La resta es %f\n",res);
                break;
            case 3:
                printf("\tMULTIPLICACION\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%d",&val2);
                res = mult(val1,val2);
                printf("La multiplicacion es %f\n",res);
                break;
            case 4:
                printf("\tPI\n\n");
                res = calculaPi();
                printf("PI es igual a: %f\n",res);
                break;
            case 5:
                printf("\tEXPONENCIAL\n\n");
                printf("dame un valor:\n");
                scanf("%f",&f1);
                res = expo(f1);
                printf("EL resultado es: %f\n",res);
                break;
            case 6:
                printf("\tPOTENCIA\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%d",&val2);
                res = 0;
                res_potencia = potencia(val1,val2);
                printf("El resultado es %lu\n",res_potencia);
                break;
            case 7:
                printf("\tCOSENO\n\n");
                printf("dame un valor:\n");
                scanf("%f",&f1);
                res = coseno(f1);
                printf("EL resultado es: %f\n",res);
                break;
            case 8:
                printf("\tDIVISION\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%d",&val2);
                res = division(val1,val2);
                printf("La division es %f\n",res);
                break;
            case 9:
                printf("\tEL SENO DE TAYLOR\n\n");
                printf("dame un valor:\n");
                scanf("%d",&val1);
                printf("dame un otro:\n");
                scanf("%f",&f1);
                res = sen_tay(f1,val2);
                printf("El resultado es %f\n",res);
                break;
            case 10:
                exit(1);
                system("clear");
                break;
            default:
                printf ("opcion no valida \n");
                system("clear");
                
        }
    }
    return 0;

}
