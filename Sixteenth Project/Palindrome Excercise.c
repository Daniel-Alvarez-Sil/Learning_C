/**Este Procedimiento Valida si un Vector Consituye un Palíndromo o No**/

#include<stdio.h>
#define iSIZE 8

int palindromeOrNot()
{
    int iArray[iSIZE], f;

    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    for (f = iSIZE - 1; f >= 0; f--)
    {
        if (iArray[f] != iArray[ ((iSIZE - 1) - f) ] )
        {
            printf("El vector ingresado no es un palindromo.\n\n");
            return 0;
        }
    }

    printf("El vector ingresado es un palindromo. ");

    printf("\n \n");

    return 0;
}
