/**Este Procedimiento se Encarga de Determinar el Numero de Digitos (sin Contar Ceros a la Izquierda) dentro de un Numero**/

#include<stdio.h>

int calculateNumberOfDigits(int iNum)
{
    if (iNum < 10)
        return  1;
    return 1 + calculateNumberOfDigits(iNum / 10);
}

void printNumberOfDigits()
{
    int iNumber;

    printf("Ingresa un valor entero mayor a cero: ");
    scanf("%i", &iNumber);
    fflush(stdin);

    printf("El numero %i tiene %i digito(s). ", iNumber, calculateNumberOfDigits(iNumber));

    printf("\n \n");
}
