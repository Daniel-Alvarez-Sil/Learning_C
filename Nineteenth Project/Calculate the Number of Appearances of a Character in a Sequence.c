/**Este Procedimiento Calcula, Dentro de una Secuencia de Caracteres, el Numero de Apariciones de Cierto Caracter**/

#include<stdio.h>

int calculateNumberOfAppearances(char cOriginal)
{
    char cInput;
    printf("\tIngresa un caracter (ingresa '$' para terminar el proceso): ");
    scanf("%c", &cInput);
    fflush(stdin);

    if (cInput == '$')
        return 0;
    else if (cInput == cOriginal)
        return 1 + calculateNumberOfAppearances(cOriginal);
    return calculateNumberOfAppearances(cOriginal);
}

void printNumberOfAppearances()
{
    char cChar;
    printf("Ingresa el caracter a encontrar: ");
    scanf("%c", &cChar);
    fflush(stdin);

    printf("El caracter '%c' fue repetido %i ocasion(es). ", cChar, calculateNumberOfAppearances(cChar));

    printf("\n \n");
}
