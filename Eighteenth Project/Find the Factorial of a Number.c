/**Este Procedimiento Calcula el Factorial de un Numero**/

#include<stdio.h>

int calculateFactorial(iNum)
{
    if (iNum == 0)
        return 1;
    else if (iNum > 0)
        return iNum * calculateFactorial(iNum - 1);
    else
        return iNum * calculateFactorial(iNum + 1);
}

void printFactorial ()
{
    int iNumber;
    printf("Ingresa un valor entero: ");
    scanf("%i", &iNumber);
    fflush(stdin);

    printf("%i! = %i", iNumber, calculateFactorial(iNumber));

    printf("\n \n");
}
