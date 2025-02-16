/**Este Procedimiento Calcula el Largo de un STRING sin Usar STRING.H**/

#include<stdio.h>

int calculateLength(char *cString)
{
    int f = 0, iLength = 0;
    while (cString[f] != '\0')
    {
       iLength++;
       f++;
    }
    return iLength;
}

void printLength()
{
    char cName[16];
    printf("Ingresa tu nombre (maximo 15 caracteres): ");
    scanf("%15[^\n]s", &cName);
    printf("\n%s: ", cName);
    printf("El largo de tu nombre es de %i caracteres. ", calculateLength(cName));

    printf("\n \n");
}
