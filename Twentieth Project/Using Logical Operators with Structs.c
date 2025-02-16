/**Este Procedimiento Enseña como Podemos Simular Operadores Logicos para Usar con Estructuras**/

///Nota: No se pueden usar operadores logicos con estructuras como si fuesen cualquier otro tipo de variable

#include<stdio.h>

typedef struct coordinate{
    int x;
    int y;
}point;

int equalPoint(point p1, point p2) // ==
{
    if (p1.x == p2.x && p1.y == p2.y)
        return 1;
    else
        return 0;
}

int notEqualPoint(point p1, point p2) // !=
{
    if (p1.x != p2.x || p1.y != p2.y)
        return 1;
    else
        return 0;
}

void usingLogicalOperatorsWithStructs()
{
    int f;
    point pInput[2];

    printf("Ingreso de la informacion de la coordenada. \n");

    for (f = 0; f < 2; f++)
    {
        printf("\tIngresa X(%i): ", f + 1);
        scanf("%i", &pInput[f].x);
        fflush(stdin);

        printf("\tIngresa Y(%i): ", f + 1);
        scanf("%i", &pInput[f].y);
        fflush(stdin);
    }

    if (equalPoint(pInput[0], pInput[1]) == 1) //pInput[0] == pInput[1]
        printf("Las dos coordenadas ingresadas son equivalentes. ");
    else if (notEqualPoint(pInput[0], pInput[1]) == 1) //pInput[0]  != pInput[1]
        printf("Las dos coordenadas ingresadas son distintas. ");

    printf("\n \n");
}
