#include<stdio.h>
#include<stdlib.h>

int inputFromUser()
{
    float fGrade1, fGrade2;

    printf("Ingresa la primera calificacion: ");
    scanf("%f", &fGrade1);
    fflush(stdin);
    printf("Ingresa la segunda calificacion: ");
    scanf("%f", &fGrade2);
    fflush(stdin);

    printf("El promedio de %0.2f y %0.2f es: %0.2f \n \n", fGrade1, fGrade2, (fGrade1 + fGrade2) / 2);
    return 0;
}
