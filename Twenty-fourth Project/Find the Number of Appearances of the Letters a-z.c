/**Este Procedimiento Utiliza un Vector para Contar la Cantidad de Apariciones en el Documento de Texto de las 26 Letras Minusculas del Alfabeto**/

#include<stdio.h>

void findNumberOfEachLowerCaseLetter()
{
    FILE *pFile;
    int iCounterArray[26] = { 0 }, f;
    char cDocument[30], cCharacter;

    printf("Ingresa el nombre del documento de texto: \n\t");
    scanf("%30[^\n]s", &cDocument);

    pFile = fopen(cDocument, "r");

    if (pFile != NULL)
    {
        while (!(feof(pFile)))
        {
            cCharacter = fgetc(pFile);
            if (cCharacter >= 'a' && cCharacter <= 'z')
                iCounterArray[cCharacter - 97]++;
        }

        for (f = 0; f < 26; f++)
            printf("\nEl numero de apariciones del caracter '%c' en el documento es %i ", f + 97, iCounterArray[f]);

        fclose(pFile);
    }
    else
        printf("ERROR: El documento ingresado no existe. ");

    printf("\n \n");
}
