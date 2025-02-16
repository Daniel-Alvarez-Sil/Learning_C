/**Este Procedimiento Calcula la Cantidad de Valores Menores a X**/

#include<stdio.h>

int calculateNumOfValuesLessThanX(int iRange)
{
    int iNum;
    printf("\tIngresa un valor entero (ingresa -1 para terminar el proceso): ");
    scanf("%i", &iNum);
    fflush(stdin);

    if (iNum == -1)
        return 0;
    else if (iNum < iRange)
        return 1 + calculateNumOfValuesLessThanX(iRange);
    else
        return 0 + calculateNumOfValuesLessThanX(iRange);
}

void printNumOfValuesLessThanX()
{
    int iNumber;
    printf("Ingresa X (valor entero): ");
    scanf("%i", &iNumber);
    fflush(stdin);

    printf("El numero de valores menores a X(%i) es %i. ", iNumber, calculateNumOfValuesLessThanX(iNumber));

    printf("\n \n");
}
