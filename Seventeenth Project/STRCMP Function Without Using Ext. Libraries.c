/**Este Procedimiento Compara 2 STRINGS y Determina su Posicionamiento Alfabetico**/

#include<stdio.h>

int stringComparison(char *cFirstString, char *cSecondString)
{
    int i = 0, iFlag = 0;
    while (iFlag == 0)
    {
        if (cFirstString[i] > cSecondString[i])
            iFlag = 1;
        else if (cFirstString[i] < cSecondString[i])
            iFlag = -1;

        if (cFirstString[i] == '\0')
            break;
        i++;
    }

    return iFlag;
}

void printComparison()
{
    char cString1[21], cString2[21];
    printf("Ingresa una oracion (maximo 20 caracteres): ");
    scanf("%20[^\n]s", &cString1);
    fflush(stdin);
    printf("Ingresa otra oracion (maximo 20 caracteres): ");
    scanf("%20[^\n]s", &cString2);

    printf("\n\t%s\n\t", cString1);

    if (stringComparison(cString1, cString2) == 1)
        printf(">");
    else if (stringComparison(cString1, cString2) == -1)
        printf("<");
    else
        printf("=");

    printf("\n\t%s", cString2);

    printf("\n \n");
}
