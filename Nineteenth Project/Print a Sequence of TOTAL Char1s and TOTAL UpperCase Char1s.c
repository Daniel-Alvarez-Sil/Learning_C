/**Este Procedimiento se Encarga de Leer del Usuario un Numero(N) y una Letra Minuscula. Después, la Rutina Procede a Imprimir N Letras Minusculas y N Letras Mayusculas**/

#include<stdio.h>

int printSequenceOfTotalChar1AndTotalUppercaseChar1(int iTotal, char cChar1)
{
    if (iTotal > 0)
    {
        printf("%c", cChar1);
        printSequenceOfTotalChar1AndTotalUppercaseChar1(iTotal - 1, cChar1);
        printf("%c", cChar1 - 32);
    }
}

void getTotalAndChar1()
{
    int iTotal;
    char cChar1;

    do{
        printf("Ingresa un valor entero (mayor a cero): ");
        scanf("%i", &iTotal);
        fflush(stdin);

        if (iTotal <= 0)
            printf("ERROR: El numero ingresado debe ser mayor a cero. \n");
    }while (iTotal <= 0);

    do{
        printf("Ingresa un caracter (a-z): ");
        scanf("%c", &cChar1);
        fflush(stdin);

        if (!(cChar1 >= 97 && cChar1 <= 122))
            printf("ERROR: El caracter ingresado debe ser entre a y z. \n");
    }while (!(cChar1 >= 97 && cChar1 <= 122));

    printf("Impresion de %i '%c's y %i '%c's: \n\t", iTotal, cChar1, iTotal, cChar1 - 32);
    printSequenceOfTotalChar1AndTotalUppercaseChar1(iTotal, cChar1);

    printf("\n \n");
}
