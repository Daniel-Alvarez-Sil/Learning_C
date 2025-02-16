/**Este Procedimiento Explora el Uso de los Ciclos de For**/

int printOdd()
{
    int i;
    printf("Impresion de Numeros Impares del 1 al 100. \n \n-");

    for(i = 1; i <= 100; i = i + 2)
    {
        printf("%i-", i);
    }

    printf("\n \n");
    return 0;
}
