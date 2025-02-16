#include<math.h>
#include<stdio.h>

int distanceBetween()
{
    int iX1, iY1, iX2, iY2;
    float dDistance;

    printf("Ingresa la ubicacion del primer punto. ");
    printf("\nX: ");
    scanf("%i", &iX1);
    fflush(stdin);
    printf("Y: ");
    scanf("%i", &iY1);
    fflush(stdin);
    printf("Ingresa la ubicacion del segundo punto. ");
    printf("\nX: ");
    scanf("%i", &iX2);
    fflush(stdin);
    printf("Y: ");
    scanf("%i", &iY2);
    fflush(stdin);
    dDistance = sqrt( (float) ((iX1 - iX2) * (iX1 - iX2) + (iY1 - iY2) * (iY1 - iY2)) );
    printf("\nLa distancia entre los 2 puntos es: %0.2f", dDistance);
    return 0;
}
