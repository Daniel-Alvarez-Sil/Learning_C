/**Este Procedimiento Calcula el Numero de Valores Pares de una Secuencia**/

#include<stdio.h>

int calculateNumOfEvenValues()
{
    int iNumber;
    printf("\tIngresa un valor entero (ingresa -1 para terminar el proceso): ");
    scanf("%i", &iNumber);
    fflush(stdin);

    if (iNumber == -1)
        return 0;
    else if (iNumber % 2 == 0)
        return 1 + calculateNumOfEvenValues();
    return calculateNumOfEvenValues();
}

void printNumOfEvenValues()
{
    printf("El numero de valores pares es %i. ", calculateNumOfEvenValues());

    printf("\n \n");
}
