/**Este Procedimiento Intercambia la Informacion de 2 Vectores**/

/// La Complejidad de la Funcion es O(1)
//  La complejidad es 1 porque para resolver el problema ejecutamos una subrutina 1 sola vez

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define iSIZE 5

int *generateArrayDynamically(int iSize)
{
    int f;
    int *iDynamicArray = malloc(iSize * sizeof(int));
    printf("Ingreso de la Informacion del Vector. \n");
    for (f = 0; f < iSize; f++)
    {
        printf("\tIngresa un elemento: ");
        scanf("%i", &iDynamicArray[f]);
    }
    printf("\n");
    return iDynamicArray;

}

void printArrayInformation(int *iArray)
{
    int f;
    printf("Impresion del Vector Completo: \n");
    for (f = 0; f < iSIZE; f++)
        printf("\tElemento #%i: %i\n", f + 1, iArray[f]);
    printf("\n");
}
void printArrayMemory(int *iArray)
{
    int f;
    printf("Direccion en Memoria del Vector Completo: %i\n", &iArray);
    for (f = 0; f < iSIZE; f++)
        printf("\tDireccion en memoria del elemento #%i: %i\n", f + 1, &iArray[f]);
    printf("\n");
}

void swap1NComplexity(int **iArray1, int **iArray2)
{
    int *temp;
    temp = *iArray1;
    *iArray1 = *iArray2;
    *iArray2 = temp;
}

void callProceduresCorrespondingToArraySwappingComplexityO1()
{
    int *iArray1, *iArray2;

    iArray1 = generateArrayDynamically(iSIZE);
    iArray2 = generateArrayDynamically(iSIZE);

    printf("Impresion de Vectores antes del Intercambio de Informacion. \n");
    printArrayInformation(iArray1);
    printArrayInformation(iArray2);

    swap1NComplexity(&iArray1, &iArray2);

    printf("Impresion de Vectores despues del Intercambio de Informacion. \n");
    printArrayInformation(iArray1);
    printArrayInformation(iArray2);

    printf("\n \n");
}
