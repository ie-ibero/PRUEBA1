/*@file  potencia.c
*
*@brief Este modulo contine la funcion de potencia. Recibe dos numeros enteros
*       y su salida es de un numero entero.
*
*@autor Avila Cortes Karina
*@date  15/04/2016
*/

/**
*@brief     Esta funcion ejecuta el proceso de la potencia.
 *
 *@variables int x : contador de for para la delimitar potencia.
 *           int c : valor inicial de 1 en la potencia.
 *           int a : recibe primer parametro referente a la base de potencia.
 *           int b : recibe segundo parametro referente al exponente de potencia. 
 *
 *@return    int c : regresa valor de la potencia.
 *
 *@autor     Avila Cortes Karina
 */

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

