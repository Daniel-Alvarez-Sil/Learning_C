//Este procedimiento se encarga de extaer los n�meros decimales de cualquier n�mero de tipo flotante

int decimalRemoval()
{
    /*Definici�n de Variables*/
    float fValue;
    /*Damos Entrada al # irracional*/
    printf("Ingresa un numero irracional: ");
    scanf("%f", &fValue);
    printf("\nExtraccion...\n \t Extraccion...\n \t \t Extraccion... \n \t \t \t Extraccion: %0.4f", fValue - (int)fValue);
    return 0;
}
