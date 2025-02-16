/*Este Procedimiento Determina, dentro de un Conjunto de Numeros, el Numero más Grande y el Más Chico*/

int rangeBetweenThree()
{
    float dA, dB, dC, dMin = 0, dMax = 0;
    printf("Ingresa el primer valor: ");
    scanf("%f", &dA);
    printf("Ingresa el segundo valor: ");
    scanf("%f", &dB);
    printf("Ingresa el tercer valor: ");
    scanf("%f", &dC);

    /***********************************Mi Solución Resolver este Problema***********************************/

    /*//Validamos que los Valores no Sean Iguales
    if (dA == dB && dB == dC)
    {
        printf("Los tres numeros tienen el mismo valor");
        return 0;
    }

    //Buscamos el Valor más Grande
    if (dA > dB && dA > dC)
        dMax = dA;
    else
    {
        if(dB > dA && dB > dC)
            dMax = dB;
        else
            dMax = dC;
    }

    //Buscamos el Valor más Pequeño
    if (dA < dB && dA < dC)
        dMin = dA;
    else
    {
        if (dB < dA && dB < dC)
            dMin = dB;
        else
            dMin = dC;
    } */

    /***********************************Solución Óptima e Ideal para Resolver este Problema***********************************/

    if (dA == dB && dB == dC)
    {
        printf("Los tres numeros tienen el mismo valor");
        return 0;
    }

    dMax = dA, dMin = dB;

    if(dA < dB)
        dMax = dB, dMin = dA;

    if(dC > dMax)
        dMax = dC;

    if(dC < dMin)
        dMin = dC;

    //Imprimimos el Rango de los Numeros
    printf("Max: %0.2f\nMin: %0.2f", dMax, dMin);
    return 0;
}
