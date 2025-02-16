/**Este Procedimiento Calcula el Numero de Caracteres en un Documento**/

#include<stdio.h>
#include<stdlib.h>

void findNumberOfCharacters()
{
    int iCounter = 0, iCharacter;
    FILE *pFile;
    pFile = fopen("myThirdFile.txt", "r");

    if (pFile != NULL)
    {
        printf("Impresion de los caracteres del documento. ");
        while (!(feof(pFile)))
        {
            iCharacter = fgetc(pFile);
            if (iCharacter != 32 && iCharacter != 10 && iCharacter != -1)
            {
                iCounter++;
                printf("\n\t- %c", iCharacter);
            }
        }
        printf("\nEl documento tiene %i caracteres. ", iCounter);
        fclose(pFile);
    }

    printf("\n \n");
}
