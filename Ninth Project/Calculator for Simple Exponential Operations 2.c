/**Este Procedimiento se Encarga de Resolver una Simple Operacion Exponencial, Mediante el Uso de un Ciclo FOR**/

int calculatorOfExponents2()
{
    int iNum, iExp, iResult, f;

    printf("Ingresa la base de la operacion exponencial: ");
    scanf("%i", &iNum);
    printf("Ingresa el exponente de la operacion exponencial: ");
    scanf("%i", &iExp);
    iResult = 1;

    for (f = 1; f <= iExp; f++)
    {
        iResult = iResult * iNum;
    }

    printf("Resultado: %i ^ %i = %i", iNum, iExp, iResult);

    printf("\n \n");

    return 0;
}
