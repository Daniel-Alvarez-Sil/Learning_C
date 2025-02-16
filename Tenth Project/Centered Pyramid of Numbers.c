/**Este Procedimiento Imprime una Piramide Centrada de una Secuencia de Valores**/

int centeredPyramid()
{
    int iRow, iCells, f, iCounter = 1;

    printf("Ingresa la cantidad de filas para la piramide. ");
    scanf("%i", &iRow);

    printf("Impresion de la Piramide. \n");

    for (f = 1; f <= iRow; f++)
    {
        for (iCells = 1; iCells <= iRow - f; iCells++)
            printf(" ");
        for(iCells = 1; iCells <= f; iCells++)
        {
            printf("%i ", iCounter);
            iCounter++;
        }
        printf("\n");
    }

    printf("\n \n");

    return 0;
}
