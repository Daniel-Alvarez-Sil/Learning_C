/**Este Procedimiento Recibe un Caracter y Imprime sus Representaciones Correspondientes, de Acuerdo al Sistema ASCII**/

int asciiChar()
{
    char cValue;
    printf("Ingresa un caracter (solo UNO): ");
    scanf("%c", &cValue);
    printf("Representaciones del Caracter.\n");
    printf("Caracter:    %c\n", cValue);
    printf("Decimal:     %i\n", cValue);
    printf("Hexadecimal: %X\n", cValue);

    printf("\n \n");

    return 0;
}
