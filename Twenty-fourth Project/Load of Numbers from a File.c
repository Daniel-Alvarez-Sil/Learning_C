/**Este Procedimiento Realiza una Carga de Numeros Provinientes de un Documento de Texto**/

#include<stdio.h>
#include<stdlib.h>

void importNumbersFromDocument()
{
    FILE *pFile;
    int iBase, iProduct, f;

    pFile = fopen("Printing_Powers_1_to_10.txt", "r");

    if (pFile != NULL)
    {
        printf("Impresion de la Informacion Cargada. \n");
        for(f = 0; f < 10; f++)
        {
            fscanf(pFile, "%i%i", &iBase, &iProduct);
            printf("%i x %i = %i\n", iBase, iBase, iProduct);
        }

        fclose(pFile);
    }

    printf("\n \n");
}
