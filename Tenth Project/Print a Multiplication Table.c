/**Este Procedimiento Imprime La Cantidad de Multiplos de Cierto Valor Requerida por el Usuario**/

#include<stdio.h>

int multiplyTable()
{
    int iNum, iTimes, f;

    printf("Ingresa un numero entero: ");
    scanf("%i", &iNum);
    fflush(stdin);
    printf("Ingresa el numero de multiplos requeridos: ");
    scanf("%i", &iTimes);
    printf("\tTabla de Multiplicacion. \n");
    for (f = 1; f <= iTimes; f++)
    {
        printf("\t\t%i * %i = %i\n", iNum, f, iNum * f);

    }

    printf("\n \n");

    return 0;
}
