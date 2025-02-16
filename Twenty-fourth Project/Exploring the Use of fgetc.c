/**Este Procedimiento Explora el Uso de la Funcion fgetc**/

#include<stdio.h>
#include<stdlib.h>

void useOfFgetc()
{
    FILE *pFile;
    pFile = fopen("myFirstFile.txt", "r");

    if (pFile == NULL)
        printf("ERROR: El archivo ingresado no existe. ");
    else
    {
        printf("El archivo ingresado ha sido abierto con exito. \n");
        printf("Lectura del archivo: \n");

        //while (fgetc(pFile) != NULL)
        //{
            printf("%c", fgetc(pFile));
        //}
        //printf("\nFin de la lectura. ");

        fclose(pFile);
    }

    printf("\n \n");
}
