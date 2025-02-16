/**Este Procedimiento Calcula la Suma de Todos los Elementos de un Vector**/

#define iSIZE 10
#include<stdio.h>

int calculateSumOfVector(int iArray[iSIZE])
{
    int f, iSum = 0;
    for (f = 0; f < iSIZE; f++)
        iSum = iSum + iArray[f];
    return iSum;
}

void printSumOfVector()
{
    int iArray[iSIZE], f;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa el valor entero #%i: ", f + 1);
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("La suma de los elementos del vector es: %i", calculateSumOfVector(iArray));

    ///NOTA: La sintaxis, "iArray", denota la direccion de memoria del primer elemento del vector
    /*printf("La direccion del primer elemento del vector: %i", iArray);

    printf("\nImpresion de las Direcciones de Memoria de los Elementos del Vector.");
    for (f = 0; f < iSIZE; f++)
        printf("\n#%i: %lu", f + 1, &iArray[f]);*/

    printf("\n \n");
}
