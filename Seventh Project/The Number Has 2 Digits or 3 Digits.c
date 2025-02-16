/**Este Programa se Encarga de Validar si un Numero tiene 2 o 3 Digitos**/

int twoDigitsQuestion()
{
    float fNumber;
    printf("Ingresa un numero: ");
    scanf("%f", &fNumber);
    if (fNumber / 10 >= 1 && fNumber / 100 < 1)
        printf("El numero tiene 2 digitos");
    else if (fNumber / 10 >= 10 && fNumber / 100 < 10)
        printf("El numero tiene 3 digitos");
    else
        printf("El numero no tiene 2 o 3 digitos");

    printf("\n \n");

    return 0;
}
