/**Este Procedimiento Recibe un Entero X y Procede a Imprimir la Suma entre los Numeros 1 a X**/

int sumOfSequence()
{
    int iNumber, f, iResult;
    printf("Ingresa un numero entero: ");
    scanf("%i", &iNumber);

    printf("\tSuma de los Componentes.\n\t\t");

    for (f = iNumber; f > 0; f--)
    {
        iResult = f + iResult;
        printf("%i + ", f);

    }

    printf("0 = %i", iResult);

    printf("\n \n");

    return 0;
}
