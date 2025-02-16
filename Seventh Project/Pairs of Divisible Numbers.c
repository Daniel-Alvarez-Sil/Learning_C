/**Este Procedimiento Valida que, Dados 3 Numeros, Todos los Numeros Puedan ser Divididos o ser el Dividendo de Una División en la cual el Cociente sea 0**/

int divisiblePairsOfThree()
{
    int iNum1, iNum2, iNum3;

    printf("Ingresa un numero: ");
    scanf("%i", &iNum1);
    printf("Ingresa un numero: ");
    scanf("%i", &iNum2);
    printf("Ingresa un numero: ");
    scanf("%i", &iNum3);

    if (iNum1 == 0)
        iNum1 = 1;
    if (iNum2 == 0)
        iNum2 = 1;
    if (iNum3 == 0)
        iNum3 = 1;


    if ((iNum1 % iNum2 == 0 || iNum2 % iNum1 == 0) && (iNum2 % iNum3 == 0 || iNum3 % iNum2 == 0) && (iNum1 % iNum3 == 0 || iNum3 % iNum1 == 0))
        printf("Los numeros son divisibles entre si mismos. ");
    else
        printf("Los numeros no son divisibles entre si mismos. ");

    printf("\n \n");

    return 0;
}
