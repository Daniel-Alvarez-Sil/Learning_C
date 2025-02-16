/**Este Procedimiento Calcula la Suma de una Secuencia Aritmetica**/

#include<stdio.h>

int calculateSumOfArithmeticSequence(int iNumber)
{
    if (iNumber == 0)
        return 0;
    return iNumber + calculateSumOfArithmeticSequence(iNumber - 1);
}

void printSumOfArithmeticSequence()
{
    int iN;

    do{
    printf("Ingresa un valor entero mayor a cero: ");
    scanf("%i", &iN);

    if (iN <= 0)
        printf("ERROR: El valor debe ser mayor a cero. \n");
    } while (iN <= 0);

    printf("La suma de la secuencia aritmetica de 1 a %i es %i. ", iN, calculateSumOfArithmeticSequence(iN));

    printf("\n \n");
}
