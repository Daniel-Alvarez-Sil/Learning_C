/**Este Procedimiento Lee una Estructura del Usuario y Procede a Imprimir Dicha Estructura**/

#include<stdio.h>

typedef struct coordinate{
    float y;
    float x;
}point;

point readCoordinateFromUser()
{
    point pInput;

    printf("Por favor ingresa la siguiente coordenada. \n");

    printf("\tIngresa X: ");
    scanf("%f", &pInput.x);
    fflush(stdin);

    printf("\tIngresa Y: ");
    scanf("%f", &pInput.y);
    fflush(stdin);

    return pInput;
}

void printCoordinateToUser(point pOutput)
{
    printf ("Coordenada ingresada --> (%0.2f, %0.2f). ", pOutput.x, pOutput.y);
}

void readAndPrintCoordinate()
{
    point p1 = readCoordinateFromUser();
    printCoordinateToUser(p1);
    printf("\n \n");
}
