int absoluteValue()
{
    float fNumber;
    printf("Ingresa un numero: ");
    scanf("%f", &fNumber);
    printf("El valor absoluto del numero ingresado es: ");
    if (!(fNumber >= 0))
        printf("%0.2f", -1 * fNumber);
    else
        printf("%0.2f", fNumber);

    printf("\n \n");
    return 0;
}
