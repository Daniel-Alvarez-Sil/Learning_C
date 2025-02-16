/**Este Procedimiento se Encarga de Sumar, de Manera Separada, los Digitos Pares e Impares de un Numero**/

int sumOfEvenOdd()
{
    int iNumber, iDoubleNumber, iValidator = 0, iAuxiliar, iTenMultiple = 1;
    int iSumEven, iSumOdd;

    do{
        printf("Ingresa un numero entero: ");
        scanf("%i", &iNumber);
        if (iNumber <= 0)
            printf("ERROR: El numero debe ser mayor que cero. \n");
    }while (iNumber <= 0);

    iDoubleNumber = iNumber;

    printf("\tSuma de los Digitos del Numero. \n\n");

    printf("\t\tNumeros Pares\tNumeros Impares\n");

    do {
            iAuxiliar = iDoubleNumber % (10 * iTenMultiple);
            iValidator = iValidator + iAuxiliar;
            iDoubleNumber = iDoubleNumber - iAuxiliar;
            iAuxiliar = iAuxiliar / iTenMultiple;
            iTenMultiple = iTenMultiple * 10;
            if (iAuxiliar % 2 == 0)
            {
                iSumEven = iSumEven + iAuxiliar;
                printf("\t\t");
            }
            else
            {
                iSumOdd = iSumOdd + iAuxiliar;
                printf("\t\t             \t");
            }
            printf("+ %i\n", iAuxiliar);


    } while (iValidator != iNumber);

    printf("\t\t--------------------------------\n");
    printf("\t\t= %i          \t= %i\n", iSumEven, iSumOdd);

    printf("\t\t+ %i          \t- %i = %i\n",iSumEven, iSumOdd, iSumEven - iSumOdd);

    printf("\n \n");

    return 0;
}
