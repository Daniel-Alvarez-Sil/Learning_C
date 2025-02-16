/**Este Procedimiento Explora el Uso de la Funciones fscanf y fprintf**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void useOfFprintfAndFscanf()
{
    /// Uso de fprintf
    FILE *pFile;
    pFile = fopen("myFirstFile.txt", "w");
    if (pFile != NULL)
    {
        fprintf(pFile, "12345");
        fclose(pFile);
    }

    /// Uso de fscanf
    pFile = fopen("myFirstFile.txt", "r");
    if (pFile != NULL)
    {
        int iTextInDocument;
        fscanf(pFile, "%i", &iTextInDocument);
        printf("El texto escrito en el documento es el siguiente: \n\t%i", iTextInDocument);
        fclose(pFile);
    }

    printf("\n \n");
}
