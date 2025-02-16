/**Este Procedimiento Calcula, Dado un Indice, el Valor de un Numero Pell**/

///Pell Numbers
// F 0 =                 0
// F 1 =                 1
// F 2 = 2 * F 1 + F 0 = 2
// F 3 = 2 * F 2 + F 1 = 5
// F 4 = 2 * F 3 + F 2 = 12
// F 5 = 2 * F 4 + F 3 = 29
// F 6 = 2 * F 5 + F 4 = 70
// F 7 =                 169

#include<stdio.h>

int calculatePellNumber(int iN)
{
    if (iN == 0)
        return 0;
    if (iN == 1)
        return 1;
    return 2 * calculatePellNumber(iN - 1) + calculatePellNumber(iN - 2);
}

void printPellNumber()
{
    int iNumber;

    do{
        printf("Ingresa un valor (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero ingresado debe ser mayor o igual a cero. \n");
    } while (iNumber < 0);

    printf("El numero PELL #%i es %i. ", iNumber, calculatePellNumber(iNumber));

    printf("\n \n");
}
