/**Este Procedimiento Recibe un Caracter e Indica si el Caracter es una Letra Minuscula, Letra Mayuscula, Digito u Otro Tipo de Caracter**/

int typeChar ()
{
    char cValue;
    printf("Ingresa un caracter (solo UNO): ");
    scanf("%c", &cValue);

    if(cValue >= 97 && cValue <= 122)
        printf("El caracter es una letra minuscula. ");
    else if (cValue >= 65 && cValue <= 90)
        printf("El caracter es una letra mayuscula. ");
    else if (cValue >= 48 && cValue <= 57)
        printf("El caracter es un digito. ");
    else
        printf("El caracter no es una letra ni un digito. ");

    printf("\n \n");
    return 0;
}
