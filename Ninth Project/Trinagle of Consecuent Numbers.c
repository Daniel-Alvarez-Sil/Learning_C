/**Este Procedimiento Imprime Una Piramide de Numeros, de Manera Secuencial**/

int printPyramid()
{
    float fNumber;
    int iCounter = 1, f;
    printf("Ingresa un numero: ");
    scanf("%f", &fNumber);
    printf("Impresion de la Piramide Correspondiente a %0.0f \n \n", fNumber);

    if (fNumber - (int)fNumber < 0.50)
        fNumber = fNumber - (fNumber - (int)fNumber);
    else
        fNumber = fNumber - (fNumber - (int)fNumber) + 1;

    while (iCounter <= fNumber)
    {
        for (f = 1; f <= iCounter; f++)
        {
            printf("%i ", f);
        }
        iCounter++;
        printf("\n");
    }

    printf("\n \n");
    return 0;
}
