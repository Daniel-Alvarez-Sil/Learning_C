/**Este Procedimiento Lee un Vector y Procede a Reiniciar Todos sus Elementos a Cero**/

#define iSIZE 5
#include<stdio.h>

void inputArray(int *pElementOfArray)
{
    int f;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa el valor entero #%i: ", f + 1);
        scanf("%i", &pElementOfArray[f]);
        fflush(stdin);
    }
}

void outputArray(int *pElementOfArray)
{
    int f;
    for (f = 0; f < iSIZE; f++)
        printf("\n%i", pElementOfArray[f]);
    printf("\n");
}

void freshVector(int *pElementOfArray)
{
    int f;
    for (f = 0; f < iSIZE; f++)
        pElementOfArray[f] = 0;
}

void printFreshVector()
{
    int iArray[iSIZE];
    inputArray(iArray);
    printf("Impresion de Vector Ingresado.");
    outputArray(iArray);
    freshVector(iArray);
    printf("Impresion de Vector Reseteado.");
    outputArray(iArray);
    printf("\n \n");
}
