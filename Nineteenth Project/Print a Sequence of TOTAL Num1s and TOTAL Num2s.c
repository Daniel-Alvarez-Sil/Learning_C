/**Este Procedimiento Recibe del Usuario los Siguientes Parametros: TOTAL, NUM1 y NUM2. Después, Procedemos a Imprimir un String Compuesto por los Ultimos Dos Parametros Ingresados**/

#include<stdio.h>

void printSequenceOfTotalNum1AndTotalNum2(int iTotal, int iNum1, int iNum2)
{
    if (iTotal > 0)
    {
        printf("%i", iNum1);
        printSequenceOfTotalNum1AndTotalNum2(iTotal - 1, iNum1, iNum2);
        printf("%i", iNum2);
    }
}

void getTotalNum1AndNum2 ()
{
    int iTotal, iNum1, iNum2;
    do {
        printf("Ingresa un numero entero (mayor a cero): ");
        scanf("%i", &iTotal);
        fflush(stdin);

        if (iTotal <= 0)
            printf("El numero ingresado debe ser mayor a cero. \n");
    } while (iTotal <= 0);

    printf("\tIngresa un numero entero: ");
    scanf("%i", &iNum1);
    fflush(stdin);

    printf("\tIngresa otro numero entero: ");
    scanf("%i", &iNum2);
    fflush(stdin);

    printf("Impresion de la secuencia de %i '%i's y %i '%i's: \n\t", iTotal, iNum1, iTotal, iNum2);

    printSequenceOfTotalNum1AndTotalNum2(iTotal, iNum1, iNum2);

    printf("\n \n");
}
