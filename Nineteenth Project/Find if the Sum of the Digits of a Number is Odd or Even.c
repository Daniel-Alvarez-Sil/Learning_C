/**Este Procedimiento Determina si la Suma de los Digitos de un Numero es Impar o Par**/

#include<stdio.h>

int calculateOddOrEvenForSumOfDigits(int iNum)
{
    int iResultSoFar;

    if (iNum < 10)
        return iNum % 2 ? 1 : 0;

    iResultSoFar = calculateOddOrEvenForSumOfDigits(iNum / 10);

    if (iResultSoFar == 0)
        if (iNum % 10 % 2 == 0)
            return 0;
        else
            return 1;
    else
        if (iNum % 10 % 2 == 0)
            return 1;
        else
            return 0;
}

void printOddOrEvenForSumOfDigits()
{
    int iNumber;

    do{
        printf("Ingresa un numero entero (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero ingresado debe ser mayor o igual a cero. \n");
    } while (iNumber < 0);

    printf("La suma de digitos del numero ingresado es ");
    if (calculateOddOrEvenForSumOfDigits(iNumber) == 1)
        printf("impar. ");
    else
        printf("par. ");

    printf("\n \n");
}
