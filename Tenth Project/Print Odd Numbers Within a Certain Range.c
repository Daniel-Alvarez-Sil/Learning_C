/**Este Programa Recibe un Numero X y Procede a Imprimir Todos los Numeros**/

int printOddFrom1ToX()
{
    int iNum, f, iSum;
    do{
        printf("Ingresa un numero mayor que 0: ");
        scanf("%i", &iNum);
        if (iNum <= 0)
            printf("ERROR: El numero ingresado debe ser mayor que 0. \n");
    }while (iNum <= 0);

    printf("\tImpresion y Suma de Numeros Impares del 1 al %i. \n\n", iNum);

    for(f = 1; f <= iNum; f+=2)
    {
        printf("\t\t+ %i\n", f);
        iSum = iSum + f;
    }

    printf("\t---------------------------\n\t\t= %i\n", iSum);

    printf("\n \n");

    return 0;
}
