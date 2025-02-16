/**Este Procedimiento Encuentra el Valor más Chico de una Secuencia de Valores**/

#include<stdio.h>

int calculateMinimumValue(int iNum)
{
    int iInputFromUser, iMinimum;

    printf("\tIngresa un valor: ");
    scanf("%i", &iInputFromUser);
    fflush(stdin);

    if (iNum > 1)
    {
        iMinimum = calculateMinimumValue(iNum - 1);
        if (iInputFromUser < iMinimum)
            return iInputFromUser;
        else
            return iMinimum;
    }
    //else
    return iInputFromUser;
}

void printMinimumValue()
{
    int iNumber;

    do{
        printf("Ingresa un valor entero (mayor a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber <= 0)
            printf("ERROR: El numero ingresado debe ser mayor a cero. \n");
    } while (iNumber <= 0);

    printf("El numero mas chico de la secuencia de %i numero(s) es %i. ", iNumber, calculateMinimumValue(iNumber));

    printf("\n \n");
}
