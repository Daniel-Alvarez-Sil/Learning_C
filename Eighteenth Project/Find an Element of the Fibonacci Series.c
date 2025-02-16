/**Este Procedimiento se Encarga de Encontrar un Elemento Deseado de la Serie de Fibonacci**/

///Fibonacci Series
//   F 0 =             0
//   f 1 =             1
//   f 2 = F 0 + F 1 = 1
//   F 3 = F 1 + F 2 = 2
//   F 4 = F 2 + F 3 = 3
//   F 5 = F 3 + F 4 = 5
//   F 6 = F 4 + F 5 = 8

#include<stdio.h>

int calculateElementOfFibonacciSeries(int iNum)
{
    if (iNum == 0)
        return 0;
    if (iNum == 1)
        return 1;
    return calculateElementOfFibonacciSeries(iNum - 1) + calculateElementOfFibonacciSeries(iNum - 2);
}

void printElementOfFibonacciSeries()
{
    int iNumber;

    do{
        printf("Ingresa un numero entero (mayor o igual a cero): ");
        scanf("%i", &iNumber);

        if (iNumber < 0)
            printf("ERROR: EL numero ingresado debe ser mayor o igual a cero. \n");
    } while (iNumber < 0);

    printf("El elemento #%i de la Serie Fibonacci es %i. ", iNumber, calculateElementOfFibonacciSeries(iNumber));

    printf("\n \n");
}
