/**Este Procedimiento Lee del Usuario los Elementos de un Vector y Procede a Desplegarlos en un Orden de Reversa**/

#include<stdio.h>
#define iSIZE 10

void displayReverse()
{
    int iArray[iSIZE], f;

    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("\nImpresion de los valores ingresados. \n");

    for(f = 0; f < iSIZE; f++)
        printf("\t %i\n", iArray[f]);

    printf("\nImpresion de los valores ingresados en orden invertido. \n");

    for(f = iSIZE - 1; f >= 0; f--)
        printf("\t %i\n", iArray[f]);

    printf("\n \n");
}
