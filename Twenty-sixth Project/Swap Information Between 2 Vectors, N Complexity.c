/**Este Procedimiento Intercambia la Informacion de 2 Vectores**/

/// La Complejidad de la Funcion es O(N)
//  La complejidad es N porque para resolver el problema ejecutamos una subrutina N veces

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 5


void swap(int *iValue1, int *iValue2)
{
    int temp;
    temp = *iValue1;
    *iValue1 = *iValue2;
    *iValue2 = temp;
}

void swapONComplexity(int *iArray1, int *iArray2)
{
    int f;
    for (f = 0; f < N; f++)
        swap(&iArray1[f], &iArray2[f]);
}

void printArray(int *iArray)
{
    int f;
    printf("\t");
    for (f = 0; f < N; f++)
        printf("%i ", iArray[f]);
    printf("\n");
}


void callProceduresCorrespondingToArraySwappingComplexityON()
{
    int iArray1[N] = {1,2,3,4,5};
    int iArray2[N] = {10,9,8,7,6};
    printf("Impresion de Vectores antes del Intercambio. \n");
    printArray(iArray1);
    printArray(iArray2);
    swapONComplexity(iArray1, iArray2);
    printf("Impresion de Vectores Despues del Intercambio. \n");
    printArray(iArray1);
    printArray(iArray2);
    printf("\n");
}
