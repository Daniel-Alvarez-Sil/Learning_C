/**Este Procedimiento se Encarga de Accesar y Modificar los Elementos de un Vector**/

void worstGrade()
{
    float fGrades[6], fWorstGrade;
    int f;

    for (f = 0; f < 6; f++)
    {
        do{
            printf("Ingresa la califiacion[%i] (1-100): ", f + 1);
            scanf("%f", &fGrades[f]);

            if ( !(fGrades[f] >= 1 && fGrades[f] <= 100) )
                printf("ERROR: La calificacion ingresada debe ser entre 1 y 100. \n");
            else if (f > 0)
            {
                if (fGrades[f] < fWorstGrade)
                    fWorstGrade = fGrades[f];
            }
            else if (f == 0)
                fWorstGrade = fGrades[0];
        }while ( !(fGrades[f] >= 1 && fGrades[f] <= 100) );
    }

    printf("\nLa peor calificacion es: \n");
    for (f = 0; f < 6; f++)
    {
        printf("- %0.2f", fGrades[f]);
        if (fWorstGrade == fGrades[f])
            printf(" <---");
        printf("\n");
    }

    printf("\n \n");
}
