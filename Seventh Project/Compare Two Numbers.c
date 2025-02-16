 /**Este Programa Compara 2 Variables para Validar si Son Iguales o Diferentes**/

int equalNumbersQuestion()
{
    float fFirstNumber, fSecondNumber;
    printf("Ingresa un numero: ");
    scanf("%f", &fFirstNumber);
    printf("Ingresa un numero: ");
    scanf("%f", &fSecondNumber);

    if (fFirstNumber == fSecondNumber)
        printf("Los dos numeros son iguales");
    else
        printf("Los dos numeros no son iguales");

    printf("\n \n");

    return 0;
}
