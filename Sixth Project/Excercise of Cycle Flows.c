/**Este Procedimiento Recibe la Calificacion del Usuario y Manda un Mensaje Correspondiente**/
int gradesFlow()
{
    float fGrade;
    printf("Ingresa tu calificacion: ");
    scanf("%f", &fGrade);

    if (fGrade >= 80.00)
        printf("Materia Aprobada con una Buena Calificacion");
    else if(fGrade >= 60.00)
            printf("Materia Aprobada con una Calificacion Promedio");
    else
        printf("Materia Reprobada. Por favor estudia mas");

    return 0;
}
