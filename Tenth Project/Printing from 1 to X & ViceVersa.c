/**Este Procedimiento Imprime de 1 a X y de X a 1**/

int from1ToX()
{
    int iNum, f;
    printf("Ingresa un numero entero: ");
    scanf("%i", &iNum);
    printf("\tImpresion de Secuencias. \n");
    for (f = 0; f < iNum; f++)
    {
        printf ("\t\t%i %i\n", f + 1, iNum - f);
    }

    printf("\n \n");

    return 0;
}
