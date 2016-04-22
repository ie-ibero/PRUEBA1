int menu(void)
{
        int opc=0;
    do
     {
        printf("Menu\n");
        printf("Opcion \n");
        printf("1-Suma \n2-Resta \n3-Multiplica\n4-Pi\n5-Exponencial\n6-Potenca\n7-Coseno\n8-Division\n9-Serie de Taylor\n");
        printf("10-Salir\n");
        if(scanf("%d",&opc)!=1)
        {
          printf("La opcion debe ser numerica, reintenta\n");
        }
        printf("----- %d \n",opc);
        while(getchar()!='\n');
    }while(opc == 0);   
    return opc;
}
