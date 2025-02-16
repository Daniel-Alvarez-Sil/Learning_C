#include<stdio.h>

float exponentOf(float dResult, int iExp)
{
    if (iExp != 0)
    {
        dResult = dResult * exponentOf(dResult, iExp - 1);
        return dResult;
    }
    else
    {
        return 1.0;
    }

}


int callExponent()
{
    float dNumber, dResult;
    int iExp;
    printf("Ingresa un numero: ");
    scanf("%f", &dNumber);
    printf("Ingresa la potencia a la que deseas elevar el numero ingresado: ");
    scanf("%i", &iExp);
    fflush(stdin);
    dResult = dNumber;
    dResult = exponentOf(dResult, iExp);
    printf("%0.2f elevado a la %i potencia es igual a %0.2f", dNumber, iExp, dResult);
}

