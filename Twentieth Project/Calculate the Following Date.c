/**Este Procedimiento, Dada una Fecha, Calcula la Siguiente Fecha**/

#include<stdio.h>

typedef struct myDate{
    int iDay;
    int iMonth;
    int iYear;
} date;

void nextDate()
{
    date firstDate;
    char    cContinua[10];
    do {
        printf("Ingresa el dia de la fecha: ");
        scanf("%i", &firstDate.iDay);
        fflush(stdin);

        printf("Ingresa el mes de la fecha: ");
        scanf("%i", &firstDate.iMonth);
        fflush(stdin);

        printf("Ingresa el ano de la fecha: ");
        scanf("%i", &firstDate.iYear);
        fflush(stdin);

        printf("\n%02i-%02i-%02i", firstDate.iDay, firstDate.iMonth, firstDate.iYear);
        printf("\n \n");

        /*Cubrimos todas las Condiciones por las Cuales una Fecha Puede ser Invalida*/
        if ( ((firstDate.iMonth == 4 || firstDate.iMonth == 6 || firstDate.iMonth == 9 || firstDate.iMonth == 11) && (firstDate.iDay > 30)) || (!(firstDate.iMonth == 2 || firstDate.iMonth == 4 || firstDate.iMonth == 6 || firstDate.iMonth == 9 || firstDate.iMonth == 11) && (firstDate.iDay > 31)) || (firstDate.iMonth > 12) || (firstDate.iMonth < 1) || (firstDate.iDay < 1) || (((firstDate.iYear % 4 == 0) && (!(firstDate.iYear % 100 == 0) || (firstDate.iYear % 100 == 0 && firstDate.iYear % 400 == 0))) && (firstDate.iMonth == 2) && (firstDate.iDay > 29)) || (!((firstDate.iYear % 4 == 0) && (!(firstDate.iYear % 100 == 0) || (firstDate.iYear % 100 == 0 && firstDate.iYear % 400 == 0))) && (firstDate.iMonth == 2) && (firstDate.iDay > 28)))
            printf("La fecha no es valida. ");
        /*Calculamos la Fecha que Procede a la Fecha Ingresada*/
        else
        {
            if (((firstDate.iMonth == 4 || firstDate.iMonth == 6 || firstDate.iMonth == 9 || firstDate.iMonth == 11) && firstDate.iDay < 30) || (!(firstDate.iMonth == 2 ||firstDate.iMonth == 4 || firstDate.iMonth == 6 || firstDate.iMonth == 9 || firstDate.iMonth == 11) && firstDate.iDay < 31) || ((firstDate.iMonth == 2) && firstDate.iDay < 28) || (((firstDate.iYear % 4 == 0) && (!(firstDate.iYear % 100 == 0)|| (firstDate.iYear % 100 == 0 && firstDate.iYear % 400 == 0)) ) && (firstDate.iDay < 29)) || (!((firstDate.iYear % 4 == 0) && (!(firstDate.iYear % 100 == 0)|| (firstDate.iYear % 100 == 0 && firstDate.iYear % 400 == 0)) ) && firstDate.iDay < 28) )
            {
                firstDate.iDay = firstDate.iDay + 1;
            }
            else
            {
                firstDate.iDay = 1;
                if (firstDate.iMonth == 12)
                {
                    firstDate.iMonth = 1;
                    firstDate.iYear = firstDate.iYear + 1;
                }
                else
                    firstDate.iMonth = firstDate.iMonth + 1;
            }
            printf("Siguiente fecha: \n%02i-%02i-%02i", firstDate.iDay, firstDate.iMonth, firstDate.iYear);
        }

        printf("\n \n");

        printf("Deseas Continuar ingresando fechas (si, no)?: ");
        scanf("%s", &cContinua);

    } while (strcmp(cContinua, "si") == 0);

    printf("\n \n");
}
