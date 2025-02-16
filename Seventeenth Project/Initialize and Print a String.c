/**Este Procedimiento Inicializa e Imprime un STRING**/

#include<stdio.h>

void printString(char *cString, int iSize)
{
    int f;
    for (f = 0; f < iSize; f++)
        printf("%c", cString[f]);
    printf("\n");
}

void initializeString()
{
    //Metodo 1
    char cString1[] = {'D', 'a', 'n', 'i', 'e', 'l', '\0'};
    printString(cString1, 7);
    //Metodo 2
    char cString2[] = "Alvarez";
    printString(cString2, 8);

    printf("\n \n");
}
