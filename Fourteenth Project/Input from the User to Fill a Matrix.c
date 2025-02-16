/**Este Procedimiento Recibe del Usuario la Información Necesaria**/

#define iROW 3
#define iCOL 4

void inputMatrix()
{
    int iMatrix[iROW][iCOL], f, k;
    for (f = 0; f < iROW; f++)
    {
        for (k = 0; k < iCOL; k++)
        {
            printf("Ingresa el numero entero de la celda %c:%i --> ", k + 65, f + 1);
            scanf("%i", &iMatrix[f][k]);
        }
    }

    printf("Impresion de la Matriz que Has Ingresado.\n");


    for (f = -1; f < iROW; f++)
    {
        if (f != -1)
            printf("%i", f + 1);
        for (k = -1; k < iCOL; k++)
        {
            if (f == -1 && k != -1)
                printf("\t %c", k + 65);
            else if (k != -1)
                printf("\t %i", iMatrix[f][k]);
        }
        printf("\n");
    }

    printf("\n \n");
}
