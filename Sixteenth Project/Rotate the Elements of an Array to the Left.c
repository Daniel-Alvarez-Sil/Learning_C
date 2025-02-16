/**Este Procedimiento Rota hacia la Izquierda los Elementos de un Vector **/

#define iSIZE 5
#include<stdio.h>

void rotateElementsLeft()
{
    int iArray[iSIZE], f, k, iAuxiliar, iN;

    for (f = 0; f < iSIZE; f++)
    {
        printf("Ingresa un valor entero: ");
        scanf("%i", &iArray[f]);
        fflush(stdin);
    }

    printf("Impresion del Vector Ingresado: \n\t");

    for (f = 0; f < iSIZE; f++)
        printf("%i ", iArray[f]);


    do{
        printf("\nIngresa el numero de posiciones que deseas rotar el vector hacia la izquierda (mayor a cero): ");
        scanf("%i", &iN);
        fflush(stdin);

        if (iN <= 0)
            printf("ERROR: El numero de posiciones debe ser mayor a cero. ");

    } while (iN <= 0);

    for (k = 1; k <= iN; k++)
    {
        iAuxiliar = iArray[0];
        for (f = 1; f < iSIZE; f++)
        {
            iArray[f - 1] = iArray[f];
        }
        iArray[iSIZE - 1] = iAuxiliar;
    }

    printf("\nImpresion del Vector con una Rotacion de Elementos hacia la Izquierda: \n\t");

    for (f = 0; f < iSIZE; f++)
        printf("%i ", iArray[f]);

    printf("\n\n");
}
