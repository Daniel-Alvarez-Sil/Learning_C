/**Este Procedimiento Calcula la 2da Potencia de los Numeros del 1 al 10 e Imprime los Resultados en un Documento**/

#include<stdio.h>
#include<stdlib.h>

void printPowersToFile()
{
    FILE *pFile;
    int f;

    pFile = fopen("Printing_Powers_1_to_10.txt", "w");

    if (pFile != NULL)
    {
        for (f = 1; f < 11; f++)
            fprintf(pFile, "%i %i\n", f, f * f);
            //fprintf(pFile, "%i^2 = %i x %i = %i\n", f, f, f, f * f);
        fclose(pFile);
    }

    printf("\n \n");
}
