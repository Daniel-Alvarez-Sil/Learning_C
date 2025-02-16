int weatherConvert()
{
    float fTemp;
    printf("Ingresa la temperatura Celsius: ");
    scanf("%f", &fTemp);
    printf("La temperatura Fahrenheit es : %0.2f ° \n", fTemp * 1.8 + 32);

    printf ("-------------------------------------------------------------- \n");

    printf("Ingresa la temperatura Fahrenheit: ");
    scanf("%f", &fTemp);
    printf("La temperatura Celsius es: %0.2f °", (fTemp - 32) / 1.8);
    return 0;
}
