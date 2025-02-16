int tripleDigits()
{
    int iInteger, iUnit, iTen, iHundred;
    printf("Ingresa un entero de 3 digitos: ");
    scanf("%i", &iInteger);
    iHundred = iInteger / 100;
    iTen = (iInteger - (iHundred * 100)) / 10;
    iUnit = iInteger - (iTen *10 + iHundred * 100);
    printf("La suma de los digitos del entero es: %i", (iUnit + iTen + iHundred));
    return 0;
}
