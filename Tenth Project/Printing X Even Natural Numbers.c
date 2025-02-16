/**Este Procedimiento Imprime X Numeros Pares Naturales**/

int printEvenNatural()
{
    int iQuantity, f;

    printf("Ingresa la cantidad de numeros naturales pares que deseas visualizar: ");
    scanf("%i", &iQuantity);

    printf("\tImpresion de %i Numero Naturales Pares. \n", iQuantity);

    for (f = 2; f <= iQuantity * 2; f = f + 2)
    {
        printf("\t\t%i\n", f);
    }

    printf("\n \n");

    return 0;
}
