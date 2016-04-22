/**
 *@file  seno.c
 *
 *@brief Este modulo contine las funciones para la obtencion del seno
 *       de un angulo determinado por el usuario mediante el uso de la
 *       serie de Taylor y regresar el resultado obtenido.
 *
 *@autor Luis A. Vizcaino M.
 *@date  15/04/2016
 */


/**
 *@brief     Esta funcion ejecuta el proceso de la serie de Taylor para el 
 *           seno de un angulo en grados.
 *
 *@variables int i : contador de for para la sumatoria de la serie de Taylor.
 *           int ini : valor inicial de la suma o resta para la serie.
 *           float res: valor final de la serie de Taylor.
 *           float rad: valor en radianes del angulo ingresado. 
 *           float fact: valor de factorial.
 *
 *@return    float res: valor final de la serie de Taylor.
 *
 *@autor     Luis A. Vizcaino M.
 */
float sen_tay(float num, int n)
{
  int i,ini;
  float res=0,rad,fact;
  rad = radianes(num);  //Transformacion grados a radianes
  for(i=0; i<=n; i++)  //Sumatoria de la serie de Taylor
    {
      ini = pow(-1,i);
      fact = factorial(2*i+1);  //Obtencion de factorial
      res = res +( ini * (pow(rad,(2*i+1))/fact) );
    }
  return (res);
}

/**
 *@brief     Esta funcion cambia el valor de un angulo ingresado de grados
 *           a radianes.
 *
 *@variables float res: valor del angulo en radianes.
 *
 *@return    float res: valor del angulo en radianes.
 *
 *@autor     Luis A. Vizcaino M.
 */
float radianes(float num){
  float res;
  res = (num*3.1416)/180;
  return(res);
}

/**
 *@brief     Esta funcion cambia el valor de un angulo ingresado de grados
 *           a radianes.
 *
 *@return    valor de factorial final.
 *
 *@autor     Luis A. Vizcaino M.
 */
float factorial(int n)
{
  if( n==0 || n==1) return (1);
  else return (n*factorial(n-1)); 
}
