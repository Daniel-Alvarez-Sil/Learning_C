/**Este Procedimiento Utiliza un Vector para Contar la Cantidad de Apariciones en el Documento de Texto de las 26 Mayusculas Letras del Alfabeto. Tambien, Procedemos a Imprimir la Letra Mayuscula que mas Ocasiones Aparecio en el Documento**/

#include<stdio.h>

void findNumberOfEachUpperCaseLetter()
{
    FILE *pFile;
    int iCounterArray[26] = { 0 }, f, iMaxIndex = 0;
    char cDocument[30], cCharacter;

    printf("Ingresa el nombre del documento de texto: \n\t");
    scanf("%30[^\n]s", &cDocument);

    pFile = fopen(cDocument, "r");

    if (pFile != NULL)
    {
        while (!(feof(pFile)))
        {
            cCharacter = fgetc(pFile);
            if (cCharacter >= 'A' && cCharacter <= 'Z')
            {
                iCounterArray[cCharacter - 65]++;
                if (iCounterArray[cCharacter - 65] > iCounterArray[iMaxIndex])
                    iMaxIndex = cCharacter - 65;
            }
        }

        for (f = 0; f < 26; f++)
            printf("\n\tLa letra '%c' se repite %i ocasion(es) en el documento ingresado ", f + 65, iCounterArray[f]);

        printf("\n\t\tLa letra '%c' es la letra que mas aparece en el documento, con %i repeticiones ", iMaxIndex + 65, iCounterArray[iMaxIndex]);

        fclose(pFile);
    }
    else
        printf("ERROR: El documento ingresado no existe. ");

    printf("\n \n");
}
