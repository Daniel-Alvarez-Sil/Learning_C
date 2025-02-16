/**Este Procedimiento se Encarga de Calcular el Promedio de las Calificaciones Ingresadas**/

#include<stdio.h>

int averageGrade()
{
    float fGrade = 0, fAverage = 0;
    int iCounter = -1;
    printf("Comienza a ingresar calificaciones. Cuando ingreses una calificacion fuera del rango 0-100, tu promedio sera calculado sin tomar en cuenta esta ultima calificacion. \n \n");
    while (fGrade >= 0 && fGrade <= 100)
    {
        iCounter++;
        fAverage = fAverage + fGrade;
        printf("\tIngresa tu calificacion: ");
        scanf("%f", &fGrade);
        fflush(stdin);
    }

    printf("\nTu promedio es ");

    if (iCounter == 0)
        printf("0");
    else
        printf("%0.2f", fAverage / iCounter);

    printf("\n \n");

    return 0;
}
