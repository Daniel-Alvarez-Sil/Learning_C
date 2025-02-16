/**Este Procedimiento Muestra el Uso del Comando TYPEDEF**/

#include<stdio.h>

typedef struct myDate{
    int iDay;
    int iMonth;
    int iYear;
} Date;

Date inputDate()
{
    Date dt;

    printf("Ingreso de la informacion de la fecha. \n");

    printf("Ingresa el dia: ");
    scanf("%i", &dt.iDay);
    fflush(stdin);

    printf("Ingresa el mes: ");
    scanf("%i", &dt.iMonth);
    fflush(stdin);

    printf("Ingresa el ano: ");
    scanf("%i", &dt.iYear);
    fflush(stdin);

    return dt;
}

void printDate(Date outputDate)
{
    printf("La fecha ingresada es %02i/%02i/%02i. ", outputDate.iDay, outputDate.iMonth, outputDate.iYear);

    printf("\n \n");
}

void inputAndPrintDate()
{
    Date Date1 = inputDate();
    printDate(Date1);
}
