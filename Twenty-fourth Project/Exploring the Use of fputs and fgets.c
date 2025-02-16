/**Este Procedimiento Explora el Uso de las Funciones fputs y fgets**/

#include<stdio.h>
#include<stdlib.h>

void useOfFputsAndFgets()
{
    FILE *pFile;

    /// Uso de fputs
    pFile = fopen("mySecondFile.txt", "w");
    if (pFile != NULL)
    {
        fputs("Prueba de escritura. ", pFile);
        fclose(pFile);
    }

    /// Uso de fgets
    pFile = fopen("mySecondFile.txt", "r");
    if (pFile != NULL)
    {
        char cString[25];
        fprintf(stdout, "La oracion escrita en el documento fue: \n\t%s", fgets(cString, 25, pFile));
        fclose(pFile);
    }

    printf("\n \n");
}
