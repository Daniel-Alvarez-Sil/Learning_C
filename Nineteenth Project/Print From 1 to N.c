/**Este Procedimiento Imprime de 1 a N y Viceversa (N Es Ingresado por el Usuario)**/

#include<stdio.h>

void printFrom1ToN(int iN)
{
    if (iN >= 1)
    {
        printFrom1ToN(iN - 1);
        printf("\t%i\n", iN);
    }

}

void printFromNTo1(int iN)
{
    if (iN >= 1)
    {
        printf("\t%i\n", iN);
        printFromNTo1(iN - 1);
    }
}

void getNFromUser()
{
    int iNumber;

    do{
        printf("Ingresa un valor entero (mayor a cero): ");
        scanf("%i", &iNumber);
        fflush(stdin);

        if (iNumber <= 0)
            printf("ERROR: El numero ingresado debe ser mayor a cero. \n");
    }while (iNumber <= 0);

    printf("Impresion de los Valores 1 a N. \n");
    printFrom1ToN(iNumber);
    printf("Fin de la Impresion de los Valores de 1 a N. \n");

    printf("Impresion de los Valores N a 1. \n");
    printFromNTo1(iNumber);
    printf("Fin de la Impresion de los Valores de N a 1. \n");

    printf("Impresion de los Valores N a 1 a N. \n");
    printFromNTo1ToN(iNumber);
    printf("\nFin de la Impresion de los Valores de N a 1 a N. ");

    printf("\n \n");
}
