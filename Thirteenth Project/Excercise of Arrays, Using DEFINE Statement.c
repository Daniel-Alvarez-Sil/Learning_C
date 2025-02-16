/**Este Procedimiento Lee del Usuario 7 Temperaturas y Calcula Tanto el Promedio, Así Como más Información**/
#include <stdio.h>
#define iSIZE 7

void weatherStation()
{
    float fTemp[iSIZE], fAverage, fMin, fMax;
    int f;

    for (f = 0; f < iSIZE; f++)
    {
        do{
            printf("Ingresa la temperatura Celsius del dia %i: ", f + 1);
            scanf("%f", &fTemp[f]);
            fflush(stdin);

            if (fTemp[f] < -273.15)
                printf("ERROR: La temperatura celsius ingresada no existe. \n");
            else
            {
                fAverage = fAverage + fTemp[f];
                if (f == 0)
                {
                    fMin = fTemp[f];
                    fMax = fTemp[f];
                }
                else if (f > 0)
                {
                    if (fMin > fTemp[f])
                        fMin = fTemp[f];
                    if (fMax < fTemp[f])
                        fMax = fTemp[f];
                }
            }
        }while (fTemp[f] < -273.15);
    }

    printf("\nInformación Calculada: \n");

    for (f = 0; f < iSIZE; f++)
    {
        printf("Dia %i: %0.2f Celsius", f + 1, fTemp[f]);
        if (fTemp[f] == fMin)
            printf(" <-- Temperatura minima");
        if (fTemp[f] == fMax)
            printf(" <-- Temperatura maxima");

        printf("\n");
    }

    fAverage = fAverage / iSIZE;
    printf("El promedio de las temperaturas es %0.2f. ", fAverage);

    printf("\n \n");
}

