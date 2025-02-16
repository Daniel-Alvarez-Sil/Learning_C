/**Este Procedimiento Imprime y Suma Cierto Rango de Multiplos de 15**/

int multiples3And5()
{
    int iLast, f, iResult = 0;
    printf("Ingresa un numero entero: ");
    scanf("%i", &iLast);

    printf("\tImpresion y Suma de los Multiplos de 3 que Tambien son Multiplos de 5, del 1 al %i. \n\n", iLast);

    for (f = 15; f <= iLast; f = f + 15)
    {
        printf("\t\t+ %i\n", f);
        iResult = iResult + f;
    }

    printf("\t---------------------------------------------------\n\t\t= %i", iResult);

    printf("\n \n");

    return 0;
}
