/**Este Procedimiento Recibe una Calificacion e Indica Si Es Valida o No**/

int validGrade()
{
    float fGrade;
    do {
            printf("Ingresa una calificacion: ");
            scanf("%f", &fGrade);

    } while (!(fGrade >= 0 && fGrade <= 100));
    printf("La calificacion %0.2f es valida. FIN. ", fGrade);

    printf("\n \n");

    return 0;
}
