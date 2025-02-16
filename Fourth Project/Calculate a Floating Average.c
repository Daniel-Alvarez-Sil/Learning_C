int average()
{
    int iGrade1, iGrade2, iGrade3;

    printf("Ingresa la primer calificacion: ");
    scanf("%i", &iGrade1);
    printf("Ingresa la segunda calificacion: ");
    scanf("%i", &iGrade2);
    printf("Ingresa la tercera calificacion: ");
    scanf("%i", &iGrade3);
    printf("El promedio de las calificaciones es: %0.2f \n \n", (iGrade1 + iGrade2 + iGrade3) / 3.0);
    return 0;
}
