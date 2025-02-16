/**Este Procedimiento Cuenta el Numero de Palabras en una Oracion**/

#include<string.h>

int countWords(char *cSentence)
{
    int i = 1, iNumOfWords = 0;
    while (cSentence[i] != '\0')
    {
        if (cSentence[i] == 32 && cSentence[i - 1] != 32)
        {
            iNumOfWords++;
        }
        i++;
    }
    return iNumOfWords;
}

void printNumberOfWords()
{
    char cSentence[52];
    printf("Ingresa una oracion (maximo 50 caracteres): ");
    scanf("%50[^\n]s", &cSentence);
    strcat(cSentence, " ");

    printf("El numero de palabras en la oracion ingresada es %i. ", countWords(cSentence));

    printf("\n \n");
}
