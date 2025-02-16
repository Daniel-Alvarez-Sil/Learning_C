/**Este Procedimiento se Encarga de Imprimir y Contar los Numeros Repitidos de un Vector**/

#define iSIZE 10
#include<stdio.h>

void repeatedElements()
{
    int iArray[iSIZE], f, k, iCounter = 0, lRepeatedNotIntoAccount = 0;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("Impresion de Valores Repetidos: \n");

    for (f = 0; f < iSIZE; f++)
    {
        for (k = 0; k < iSIZE; k++)
        {
            if (k == f)
                continue;
            if (iArray[f] == iArray[k] && k > f)
                break;
            else if (iArray[f] == iArray[k] &&  k < f)
            {
                lRepeatedNotIntoAccount = 1;
                break;
            }
        }

        if (k != iSIZE && lRepeatedNotIntoAccount == 0)
        {
            printf("\t- %i\n", iArray[f]);
            iCounter++;
        }
        else
            lRepeatedNotIntoAccount = 0;
    }

    if (iCounter == 0)
        printf("No hay ningun elemento repetido en el vector. ");
    else
        printf("Hay un total de %i elemento(s) repetido(s) en el vector. ", iCounter);

    printf("\n \n");
}
