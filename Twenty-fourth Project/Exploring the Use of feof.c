/**Este Procedimiento Explora el Uso de la Funcion feof**/

#include<stdio.h>
#include<stdlib.h>

/// EOF --> END OF FILE
//  The EOF is not an element of the file, but it helps determine the end of itself
//  The EOF is ususally -1

void useOfFeof()
{
    FILE *pFile;
    pFile = fopen("mySecondFile.txt", "r");

    if (pFile != NULL)
    {
        printf("Impresion de la informacion del documento: \n\t");
        while (!(feof(pFile)))
            printf("%c", fgetc(pFile));
        fclose(pFile);
    }

    printf("\n");
}
