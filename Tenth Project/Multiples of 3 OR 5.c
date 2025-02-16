/**Este Procedimiento Imprime y Suma Cierto Rango de Multiplos de 3 y 5**/

int multiples3Or5()
{
    int iLast, f, iResult, iTwo = 2;

    printf("Ingresa un numero entero: ");
    scanf("%i", &iLast);

    printf("\tImpresion y Suma de los Multiplos de 3 y 5, del 1 al %i. \n \n", iLast);

    for (f = 3; f <= iLast; f = f + 3)
    {
        printf("\t\t+ %i\n", f);

        iResult = iResult + f;

        if (!((f + iTwo) % 3 == 0) && ((f + iTwo) <= iLast))
        {
            printf("\t\t\t+ %i\n", f + iTwo);
            iResult = iResult + f + iTwo;
        }

        iTwo = iTwo + 2;
    }

    printf("\t---------------------------------------------------\n\t\t= %i", iResult);

    printf("\n \n");

    return 0;
}
