#include<math.h>
#include<stdio.h>

int reverseNumber()
{
    unsigned long iNumber, iValidar, iExponent, iSum, iReverse;
    int iCounter, f;
    printf("Ingresa un valor entero: ");
    scanf("%lu", &iNumber);
    iCounter = 0, iSum = 0, iReverse = 0;
    do
    {
        iExponent = pow(10, iCounter);
        iSum = iSum + (iNumber / iExponent % 10);
        iValidar = iValidar + ((iNumber / iExponent % 10) * iExponent);
        iCounter++;
        printf("Cargando... \n");
    }while (iNumber != iValidar);

    for(f = 0; f < iCounter; f++)
    {
        iExponent = pow(10, f);
        iReverse = iReverse + pow(10, iCounter - f - 1) * (iNumber / iExponent % 10);
        printf("Cargando... \n");
    }
    printf("Suma de los Digitos del Entero: %lu\n", iSum);
    printf("El digito ordenado en reversa es: %lu", iReverse);
    return 0;
}
