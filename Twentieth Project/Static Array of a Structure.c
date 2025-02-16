/**Este Procedimiento Enseña los Vectores Estaticos de Tipo ESTRUCTURA O STRUCT**/

#include<stdio.h>
#define iSIZE 5

typedef struct coordinate{
    int x;
    int y;
}point;

void staticArrayOfStruct()
{
    int f;
    point pArray[iSIZE];

    printf("Ingreso de la Informacion de %i Coordenada(s). \n", iSIZE);
    for (f = 0; f < iSIZE; f++)
    {
        printf("Informacion de la Coordenada #%i. \n", f + 1);

        printf("\tIngresa X: ");
        scanf("%i", &pArray[f].x);
        fflush(stdin);

        printf("\tIngresa Y: ");
        scanf("%i", &pArray[f].y);
        fflush(stdin);
    }

    printf("Impresion de la Informacion de %i Coordenada(s). \n", iSIZE);
    for (f = 0; f < iSIZE; f++)
    {
        printf("Informacion de la Coordenada #%i --> (%i, %i) \n", f + 1, pArray[f].x, pArray[f].y);
    }

    printf("\n \n");
}
