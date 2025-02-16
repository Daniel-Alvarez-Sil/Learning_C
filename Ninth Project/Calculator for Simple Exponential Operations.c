/**Este Procedimiento se Encarga de Resolver una Simple Operacion Exponencial, Mediante el Uso de un Ciclo WHILE**/

int calculatorOfExponents()
{
    int iBase, iExp, iExp2, iResult;
    printf("Ingresa la base (entero) de la operacion exponencial: ");
    scanf("%i", &iBase);
    printf("Ingresa el exponente (entero) de la operacion exponencial: ");
    scanf("%i", &iExp);
    if (iExp > 0)
        iResult = iBase;
    else
        iResult = 1;
    iExp2 = iExp;

    while(iExp > 1)
    {
        iResult = iResult * iBase;
        iExp = iExp - 1;
    }

    printf("%i ^ %i = %i", iBase, iExp2, iResult);

    printf("\n \n");

    return 0;

}
