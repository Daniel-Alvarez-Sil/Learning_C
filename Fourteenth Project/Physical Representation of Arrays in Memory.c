/**Este Procedimiento se Encarga de Desplegar la Direccion en Memoria de los Elementos de Vectores (1D y 2D)**/

void memoryAddress()
{
    int f, k;

    //Impresion de un Vector y sus Direcciones de Memoria
    int iArray[5] = {1,2,3};
    printf("Impresion de un Vector y sus Direcciones en Memoria. \n");
    for (f = 0; f < 5; f++)
    {
        printf("Elemento: %i\nDireccion:%lu\n\n", iArray[f], &iArray[f]);
    }

    printf("\n \n");

    //Impresion de una Matriz y sus Direcciones de Memorio
    int iMatrix[2][5] = { {1,2,3,4,5}, {25,26} };
    printf("Impresion de una Matriz y sus Direcciones en Memoria.\n");
    for (f = 0; f < 2; f++)
    {
        for (k = 0; k < 5; k++)
        {
            printf("Elemento: %i\nDireccion: %lu\n\n", iMatrix[f][k], &iMatrix[f][k]);
        }
    }


    printf("\n \n");
}
