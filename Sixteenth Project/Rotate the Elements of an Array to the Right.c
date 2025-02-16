/**Este Procedimiento se Encarga de Rotar los Elementos de un Vector hacia la Derecha**/

#define iSIZE 5
#include<stdio.h>

void rotateElementsRight()
{
    int iArray[iSIZE], f, k, iAuxiliar, iN;

    printf("Ingreso de %i Elementos. \n", iSIZE);
    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa el valor #%i: ", f + 1);
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("Impresion del Vector con los Elementos Ingresados: \n \t");
    for (f = 0; f < iSIZE; f++)
        printf("%i ", iArray[f]);

    do{
        printf("\nIngresa el numero de posiciones que deseas rotar el vector hacia la derecha (mayor a cero): ");
        scanf("%i", &iN);
        fflush(stdin);

        if (iN <= 0)
            printf("ERROR: El numero de posiciones debe ser mayor a cero. ");
    } while (iN <= 0);

    printf("Impresion del Vector con los Elementos Rotados hacia la Derecha %i Posicion(es): \n\t", iN);
    for (k = 1; k <= iN; k++)
    {
        iAuxiliar = iArray[iSIZE - 1];
        for (f = iSIZE - 2; f >= 0; f--)
            iArray[f + 1] = iArray[f];
        iArray[0] = iAuxiliar;
    }

    for (f = 0; f < iSIZE; f++)
        printf("%i ", iArray[f]);

    printf("\n \n");
}
