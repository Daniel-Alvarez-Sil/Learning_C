/**Este Procedimiento Enseña como Crear un Elemento de Tipo Estructura dentro de una Estructura**/

#include <stdio.h>

typedef struct coordinate{
    int x;
    int y;
}point;

typedef struct circumference{
    point center;
    int radius;
}circle;

void usingStructWithinStruct()
{
    circle circle1;

    printf("Ingreso de la Informacion de un Circulo. \n");

    printf("\tIngresa el centro del circulo: \n");
    printf("\t\tIngresa el punto X: ");
    scanf("%i", &circle1.center.x);
    fflush(stdin);
    printf("\t\tIngresa el punto Y: ");
    scanf("%i", &circle1.center.y);
    fflush(stdin);

    printf("\tIngresa el radio del circulo: ");
    scanf("%i", &circle1.radius);
    fflush(stdin);

    printf("\nImpresion de la Informacion del Circulo. \n");

    printf("\tCentro del circulo: (%i, %i) \n", circle1.center.x, circle1.center.y);
    printf("\tRadio del circulo: %i", circle1.radius);

    printf("\n \n");
}
