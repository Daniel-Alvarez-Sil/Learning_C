/**Este Procedimiento Lee del Usuario lo Siguiente: 1 Numero(N) y 2 Caracteres. Despues, la Rutina Procede a Imprimir el Primer Caracter N Veces e Imprime el Segundo Caracter 2 x N Veces**/

#include<stdio.h>

void printSequenceOfTotalChar1And2TotalChar2(int iTotal, char cChar1, char cChar2)
{
    if (iTotal > 0)
    {
        printf("%c", cChar1);
        printSequenceOfTotalChar1And2TotalChar2(iTotal - 1, cChar1, cChar2);
        printf("%c%c", cChar2, cChar2);
    }
}

void getTotalAndChar1AndChar2 ()
{
    int iTotal;
    char cChar1, cChar2;

    do{
        printf("Ingresa un valor (mayor a cero): ");
        scanf("%i", &iTotal);
        fflush(stdin);

        if (iTotal <= 0)
            printf("ERROR: El valor ingresado debe ser mayor a cero. \n");
    } while (iTotal <= 0);

    printf("\tIngresa un caracter: ");
    scanf("%c", &cChar1);
    fflush(stdin);

    printf("\tIngresa otro caracter: ");
    scanf("%c", &cChar2);
    fflush(stdin);

    printf("Impresion de la secuencia de %i '%c's y %i '%c's: \n\t", iTotal, cChar1, iTotal * 2, cChar2);
    printSequenceOfTotalChar1And2TotalChar2(iTotal, cChar1, cChar2);

    printf("\n \n");
}
