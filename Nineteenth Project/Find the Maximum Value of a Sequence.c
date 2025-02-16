/**Este Procedimiento Encuentra el Valor mas Grande de una Secuencia**/

#include<stdio.h>

int calculateMaximumValue(int iRange)
{
    int iNumber, iMaximum;
    if (iRange > 0)
    {
        do{
            printf("\tIngresa un valor (mayor a cero): ");
            scanf("%i", &iNumber);
            fflush(stdin);

            if (iNumber <= 0)
                printf("\tERROR: El numero ingresado debe ser mayor a cero. \n");
        }while (iNumber <= 0);

        iMaximum = calculateMaximumValue(iRange - 1);
        if (iNumber > iMaximum)
            return iNumber;
        else
            return iMaximum;
    }
    return 0;

}

void printMaximumValue()
{
    int iNumber;
    do{
        printf("Ingresa un valor mayor a cero: ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber <= 0)
            printf("ERROR: El numero ingresado debe ser mayor a cero. \n");
    }while (iNumber <= 0);

    printf("El numero mas grande de la secuencia de %i numero(s) es %i. ", iNumber, calculateMaximumValue(iNumber));

    printf("\n \n");
}
