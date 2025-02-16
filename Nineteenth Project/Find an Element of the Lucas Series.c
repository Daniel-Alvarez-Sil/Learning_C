/**Este Procedimiento Encuentra un Valor de la Serie de Lucas**/

///Serie de Lucas
// F 0 = 2
// F 1 = 1
// F 2 = F 0 + F 1 = 3
// F 3 = F 1 + F 2 = 4
// F 4 = F 2 + F 3 = 7
// F 5 = F 3 + F 4 = 11
// F 6 = F 4 + F 5 = 18
// F 7 = F 5 + F 6 = 29
// F 8 = F 6 + F 7 = 47

#include<stdio.h>

int calculateElementOfTheLucasSeries(int i)
{
    if (i == 0)
        return 2;
    if (i == 1)
        return 1;
    return calculateElementOfTheLucasSeries(i - 1) + calculateElementOfTheLucasSeries(i - 2);
}

void printElementOfTheLucasSeries()
{
    int iNumber;

    do{
        printf("Ingresa un valor entero (mayor o igual a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber < 0)
            printf("ERROR: El numero ingresado debe ser mayor o igual a cero. \n");
    }while (iNumber < 0);

    printf("El elemento #%i de la serie de Lucas es %i. ", iNumber, calculateElementOfTheLucasSeries(iNumber));

    printf("\n \n");
}
