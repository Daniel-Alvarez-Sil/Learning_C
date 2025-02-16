/**Esta Funcion, dados 2 Valores, Imprime el Mayor y el Menor Valor **/

void minMaxOf2(int iNum1, int iNum2)
{
     if (iNum1 > iNum2)
        printf("El valor %i es mayor que el valor %i. \n", iNum1, iNum2);
    else if (iNum1 < iNum2)
        printf("El valor %i es mayor que el valor %i. \n", iNum2, iNum1);
    else
        printf("Los valores %i y %i son iguales. \n", iNum1, iNum2);

    printf("\n \n");
}
