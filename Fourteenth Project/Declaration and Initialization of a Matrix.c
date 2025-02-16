/**Este Procedimiento Inicializa y Declara una Matriz de Distintas Maneras**/

void initializeMatrix()
{
    int f, k;

    //Standard Way
    int iMatrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printf("Impresion de Matriz (3 x 4) que fue Inicializada de Manera Estandar.\n");
    for(f = 0; f < 3; f++)
    {
        for (k = 0; k < 4; k++)
            printf("\t%i", iMatrix[f][k]);
        printf("\n");
    }

    printf("\n \n");

    //Incomplete Values in the Internal Curly Brackets (2 Examples)
    int iMatrix2[4][3] = {{1,2}, {4,5,8}, {10}};
    printf("Impresion de Matriz (4 x 3) que Fue Inicializada con Valores en Blanco.\n");
    for(f = 0; f < 4; f++)
    {
        for(k = 0; k < 3; k++)
            printf("\t%i", iMatrix2[f][k]);
        printf("\n");
    }

    printf("\n \n");

    int iMatrix3[2][3] = { {5,6}, {7} };
    printf("Impresion de Matriz (2 x 3) que Fue Inicializada con Valores en Blanco.\n");
    for (f = 0; f < 2; f++)
    {
        for (k = 0; k < 3; k++)
            printf("\t%i", iMatrix3[f][k]);
        printf("\n");
    }

    printf("\n \n");

    //Excessive Values in the Internal Curly Brackets
    int iMatrix4[5][6] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    printf("Impresion de Matriz (5 x 6) que Fue Inicializada con Una Secuncia Consecutiva de Valores.\n");
    for (f = 0; f < 5; f++)
    {
        for (k = 0; k < 6; k++)
            printf("\t%i", iMatrix4[f][k]);
        printf("\n");
    }

    printf("\n \n");
}
