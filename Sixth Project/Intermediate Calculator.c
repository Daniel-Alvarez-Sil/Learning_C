/**Este Procedimiento Simula, a un Nivel Intermedio, la Funcionalidad de una Calculadora**/

int calculator()
{
    float fValue1, fValue2, fResult;
    char cOperation;
    printf("Ingresa el tipo de operacion a realizar ('+', '-', 'x', '/'): ");
    scanf("%c", &cOperation);
    printf("Ingresa el primer valor de la operacion: ");
    scanf("%f", &fValue1);
    printf("Ingresa el segundo valor de la operacion: ");
    scanf("%f", &fValue2);
    printf("    %0.2f\n %c  %0.2f\n---------------------------\n", fValue1, cOperation, fValue2);

    switch(cOperation)
    {
    case '+':
        fResult = fValue1 + fValue2;
        break;
    case '-':
        fResult = fValue1 - fValue2;
        break;
    case 'x':
        fResult = fValue1 * fValue2;
        break;
    case '/':
        if (!(fValue2 == 0))
            fResult = fValue1 / fValue2;
        else
        {
            printf("=   ComplexInfinity");
            return 0;
        }
        break;
    default:
        printf("El operador matemamtico que has ingresado no es valido.");
        return 0;
    }

    printf("=   %0.2f\n", fResult);




    return 0;

}
