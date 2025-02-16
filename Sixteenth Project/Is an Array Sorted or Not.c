/**Este Procedimiento Verifica si Un Vector es Ascendente, Ordenado o no Tiene Orden**/

#include<stdio.h>
#define iSIZE 6

// iArray = {1,2,5,8,10} --> Ascendente
// iArray = {1,2,2,3,11} --> Ordenado
// iArray = {3,2,5,6,4}  --> Sin Orden

void arraySortedOrNot()
{
    int iArray[iSIZE], f, lSorted = 1;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
        if (f != 0)
        {
            if (iArray[f - 1] < iArray[f] && lSorted != -1)
                lSorted++;
            else if (iArray[f - 1] == iArray[f] && lSorted != -1)
                lSorted = 1;
            else if (iArray[f - 1] > iArray[f])
                lSorted = -1;
        }
    }

    if (lSorted == iSIZE)
        printf("El vector tiene una alineacion ascendente. ");
    else if (lSorted > -1 && lSorted < iSIZE)
        printf("El vector esta ordenado. ");
    else
        printf("El vector no tiene orden. ");

    printf("\n \n");
}
