/**Este Procedimiento Calcula el Numero de Lineas en un Documento**/

#include<stdio.h>
#include<stdlib.h>

void findNumberOfLines()
{
    FILE *pFile;
    int iCounter = 1, iCharacter;

    pFile = fopen("myThirdFile.txt", "r");

    if (pFile != NULL)
    {
        while (!(feof(pFile)))
        {
            if (fgetc(pFile) == 10)
                iCounter++;
        }
        printf("El numero de lineas en el documento es %i. ", iCounter);
        fclose(pFile);
    }

    printf("\n \n");
}
