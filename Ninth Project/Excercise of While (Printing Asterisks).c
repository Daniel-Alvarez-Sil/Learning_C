/**Este Procedimiento Imprime la Cantidad de Asteriscos que el Usuario Requiera**/

int excerciseOfWhile()
{
    int iAsterisk, iCounter = 0;
    printf("Ingresa la cantidad de asteriscos que requieres imprimir: ");
    scanf("%i", &iAsterisk);
    printf("Impresion de asteriscos: \n");
    while (iCounter < iAsterisk)
    {
        printf("*");
        iCounter = iCounter + 1;
    }

    printf("\n \n");

    return 0;
}
