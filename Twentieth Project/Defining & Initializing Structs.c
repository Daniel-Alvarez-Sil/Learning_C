/**Este Procedimiento Define e Inicializa una Tipo de Dato Struct**/

#include<stdio.h>

struct date{
    int iDay;
    int iMonth;
    int iYear;
};

void defineInitializeStructs()
{
    struct date date1;

    printf("Ingresa los datos de la fecha. \n");

    printf("\tIngresa el dia: ");
    scanf("%i", &date1.iDay);
    fflush(stdin);

    printf("\tIngresa el mes: ");
    scanf("%i", &date1.iMonth);
    fflush(stdin);

    printf("\tIngresa el año: ");
    scanf("%i", &date1.iYear);
    fflush(stdin);

    printf("La fecha ingresada es %02i/%02i/%02i. ", date1.iDay, date1.iMonth, date1.iYear);

    printf("\n \n");
}
