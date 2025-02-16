/**Este Procedimiento Crea una Tabla de Multiplicar**/

#include <stdio.h>
#define iSIZE 10

void multiplicationTable()
{
    int iTable[iSIZE][iSIZE], f, k;

    for (f = 0; f < iSIZE; f++)
    {
        for (k = 0; k < iSIZE; k++)
            iTable[f][k] = (f + 1) * (k + 1);
    }

    printf("Impresion de las Tablas de Multiplicar.\n");

    for (f = 0; f < iSIZE; f++)
    {
        for (k = 0; k < iSIZE; k++)
            printf("\t%i", iTable[f][k]);
        printf("\n");
    }

    printf("\n \n");
}
