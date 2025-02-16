/**Este Procedimiento Muestra el uso de los Ciclos Switch CASE**/

int switchCase()
{
    char cGrade;
    printf("Ingresa tu calificacion (A-F): ");
    scanf("%c", &cGrade);
    switch(cGrade)
    {
    case 'A':
        printf("Tu calificacion esta entre el rango: 90-100. ");
        break;
    case 'B':
        printf("Tu calificacion esta entre el rango: 80-89.");
        break;
    case 'C':
        printf("Tu calificacion esta entre el rango: 70-79.");
        break;
    case 'D':
        printf("Tu calificacion esta entre el rango: 60-69.");
        break;
    case 'F':
        printf("Tu calificacion esta entre el rango: 0-59.");
        break;
    }
    return 0;
}
