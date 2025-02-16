/**Este Procedimiento Lee del Usuario un Vector y Procede a Imprimir la Suma más Grande Formada por Elementos Adyacentes**/

#include<stdio.h>
#define iSIZE 5

void largestNeighbours()
{
    int iArray[iSIZE], f, iSum;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
        if (f != 0)
        {
            if (f == 1)
                iSum = iArray[0] + iArray[1];
            else if (iArray[f - 1] + iArray[f] > iSum)
                iSum = iArray[f - 1] + iArray[f];
        }
    }

    printf("La suma mas grande formada por la adicion de 2 elementos del vector es: %i", iSum);

    printf("\n\n");
}
