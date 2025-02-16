/**Este Procedimiento se Encarga de Encontrar, dentro de los Elementos de un Vector, la Suma de 2 Numeros más Cercano al Cero**/

#define iSIZE 6
#include<stdio.h>

int absoluteValue(int iValue)
{
    if (iValue >= 0)
        return iValue;
    else
        return iValue * -1;
}

void nearestToZero()
{
    int iArray[iSIZE], f, k, iNearest;

    printf("Ingreso de %i Elementos Enteros. \n", iSIZE);
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa el valor entero #%i: ", f + 1);
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("La suma de 2 numeros mas cercana a cero es: ");
    iNearest = iArray[0] + iArray[1];
    for (f = 0; f < iSIZE - 1; f++)
    {
        for (k = f + 1; k < iSIZE; k++)
        {
            if ( absoluteValue(iArray[f] + iArray[k]) < absoluteValue(iNearest))
                iNearest = iArray[f] + iArray[k];
        }
    }

    printf("%i. ", iNearest);

    printf("\n \n");
}
