/**Este Procedimiento Recibe del Usuario el Nombre de un Documento y Procede a Calcular el Numero de Apariciones (en el Documento) de Cierto Caracter**/

#include<stdio.h>

void findNumberOfAppearances()
{
    FILE *pFile;
    int iCounter = 0;
    char cDocument[30], cCharacter;

    printf("Ingresa el nombre del documento: ");
    scanf("%30[^\n]s", &cDocument);
    fflush(stdin);

    pFile = fopen(cDocument, "r");

    if(pFile != NULL)
    {
        printf("\tIngresa un caracter para buscar dentro del documento: ");
        scanf("%c", &cCharacter);
        fflush(stdin);
        while (!(feof(pFile)))
        {
            if (cCharacter == fgetc(pFile))
                iCounter++;
        }

        printf("\t\tEl caracter '%c' se repite %i ocasion(es) en el documento. ", cCharacter, iCounter);

        fclose(pFile);
    }
    else
        printf("ERROR: El documento ingresado no existe. ");

    printf("\n \n");
}
