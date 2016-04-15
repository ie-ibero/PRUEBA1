float coseno(float z){
  //Declaracion de variables:
  int n;
  float sum, termino;

  //Desarrollo el algoritmo:
  for(n=1, sum=0, termino=1 ; n<30; n++){
    sum = sum + termino;
    termino =  -(termino/(2*n-1))/(2*n)*z*z;
  }
  return sum;
}
