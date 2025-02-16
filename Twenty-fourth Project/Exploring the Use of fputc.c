/**Este Procedimiento Explora el Uso de la Funcion fputc**/

#include<stdio.h>
#include<stdlib.h>

void useOfFputc()
{
    FILE *pFile;
    pFile = fopen("myFirstFile.txt", "w");

    if (pFile == NULL)
        printf("ERROR: El documento ingresado no existe. ");
    else
    {
        printf("El documento ha sido recibido con exito. ");
        /// fputc = putchar = printf("%c", cX);
        printf("\nEl mensaje impreso en el documento: ");
        fputc('H', stdout);
        fputc('e', stdout);
        fputc('y', stdout);
        fputc('H', pFile);
        fputc('e', pFile);
        fputc('y', pFile);
        fclose(pFile);
    }

    printf("\n \n");
}
