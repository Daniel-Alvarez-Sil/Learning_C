/**Este Procedimiento se Encarga de Imprimir y Contar los Elementos Unicos de un Vector**/

#include<stdio.h>
#define iSIZE 10

void uniqueElements()
{
    int iArray[iSIZE], iCounter = 0, f, k;
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un numero entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("Impresion de los Valores Unicos:\n");

    for (f = 0; f < iSIZE; f++)
    {
        for (k = 0; k < iSIZE; k++)
        {
            if (k == f)
                continue;
            if (iArray[f] == iArray[k])
                break;
        }
        if (k == iSIZE)
        {
            printf("\tNumero Unico: %i\n", iArray[f]);
            iCounter++;
        }
    }

    if (iCounter == 0)
        printf("No hay valores unicos en el vector. ");
    else
        printf("Existen %i numero(s) unicos en el vector ingresado. ", iCounter);

    printf("\n \n");
}
