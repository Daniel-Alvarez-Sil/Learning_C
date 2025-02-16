/**Este Procedimiento Calcula la Suma de Todos los Valores Pares Ingresados**/

#include<stdio.h>

int calculateSumOfEvenValues()
{
    int iNumber;

    printf("\tIngresa un valor entero (ingresa -1 para terminar el proceso): ");
    scanf("%i", &iNumber);
    fflush(stdin);

    if (iNumber == -1)
        return 0;
    else if (iNumber % 2 == 0)
        return iNumber + calculateSumOfEvenValues();
    return calculateSumOfEvenValues();
}

void printSumOfEvenValues()
{
    printf("La suma de los numeros pares es %i. ", calculateSumOfEvenValues());

    printf("\n \n");
}
