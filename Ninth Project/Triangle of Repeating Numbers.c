/**Este Procedimiento se Encarga de Imprimir una Piramide con los Componentes de un Numero**/

int printPyramid2()
{
    float fNumber;
    int iCounter = 1, f;

    printf("Ingresa un numero: ");
    scanf("%f", &fNumber);

    if (fNumber - (int) fNumber < 0.5)
        fNumber = fNumber - (fNumber - (int) fNumber);
    else
        fNumber = fNumber - (fNumber - (int) fNumber) + 1;

    printf("Impresion de la Piramide Correspondiente a %0.0f \n \n", fNumber);

    while (iCounter <= fNumber)
    {
        for (f = 1; f <= iCounter; f++)
            printf("%i ", iCounter);
        printf("\n");
        iCounter++;
    }

    printf("\n \n");

    return 0;
}
