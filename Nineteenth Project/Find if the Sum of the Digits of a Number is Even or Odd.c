/**Este Procedimiento Determina si la Suma de los Digitos de un Numero es Par o Impar**/

#include<stdio.h>

int calculateEvenOrOddForSumOfDigits(int iNumber)
{
    /**Código no Optimizado**/
    /*int iResultSoFar;
    if (iNumber < 10)
    {
        if(iNumber % 2 == 0)
            return 1;
        else
            return 0;
    }

    iResultSoFar = calculateEvenOrOddForSumOfDigits(iNumber / 10);

    if (iNumber % 10 % 2 == 0)
        if (iResultSoFar == 1)
            return 1;
        else
            return 0;
    else
        if (iResultSoFar == 1)
            return 0;
        else
            return 1;*/

    /**Código Optimizado y Minimizado**/
    if (iNumber < 10)
        return iNumber % 2 == 0 ? 1 : 0;
    if (iNumber % 10 % 2 == 0)
        return calculateEvenOrOddForSumOfDigits(iNumber / 10);
    else
        return !calculateEvenOrOddForSumOfDigits(iNumber / 10);
}

void printEvenOrOddForSumOfDigits()
{
    int iNumber;
    do{
        printf("Ingresa un valor entero (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero ingresado debe ser mayor o igual a cero. \n");
    } while (iNumber < 0);


    printf("La suma de los digitos del numero %i es ", iNumber);
    if (calculateEvenOrOddForSumOfDigits(iNumber) == 1)
        printf("par. ");
    else
        printf("impar. ");

    printf("\n \n");
}
