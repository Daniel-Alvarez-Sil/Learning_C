/**Esta Funcion Recibe 3 Calificaciones e Imprime su Promedio**/

#include<stdio.h>
#include<stdlib.h>

float calculateAverage(int iGrade1, int iGrade2, int iGrade3)
{
    float  fAverage = (iGrade1 + iGrade2 + iGrade3) / 3.00;
    printf("\n\n\t\t\t\t\t%0.2f\n", fAverage);
    return fAverage;
}
