/**Este Procedimiento se Encargar de Sumar Todos los Digitos de un Entero**/

#include<stdio.h>

int calculateSumOfAllDigits(int iNum)
{
    if (iNum < 10)
        return iNum;
    return iNum % 10 + calculateSumOfAllDigits(iNum / 10);
}

void printSumOfAllDigits()
{
    int iNumber;
    do{
        printf("Ingresa un numero entero (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero debe ser mayor o igual a cero.\n");
    } while (iNumber < 0);

    printf("La suma de los digitos del numero %i es %i. ", iNumber, calculateSumOfAllDigits(iNumber));

    printf("\n \n");
}
