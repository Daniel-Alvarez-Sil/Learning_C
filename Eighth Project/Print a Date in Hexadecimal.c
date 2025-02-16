/**Este Procedimiento se Encarga de Imprimir una Fecha en Formato Hexadecimal**/

#include<stdio.h>

int hexDate()
{
    int     iDia, iMes, iAno;
    char    cContinua[10];
    do {
        printf("Ingresa el dia de la fecha: ");
        scanf("%i", &iDia);
        //fflush(stdin);
        printf("Ingresa el mes de la fecha: ");
        scanf("%i", &iMes);
        //fflush(stdin);
        printf("Ingresa el ano de la fecha: ");
        scanf("%i", &iAno);
        fflush(stdin);

        printf("\n%02i-%02i-%02i", iDia, iMes, iAno);
        printf("\n \n");

        /*Cubrimos todas las Condiciones por las Cuales una Fecha Puede ser Invalida*/
        if ( ((iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && (iDia > 30)) || (!(iMes == 2 || iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && (iDia > 31)) || (iMes > 12) || (iMes < 1) || (iDia < 1) || (((iAno % 4 == 0) && (!(iAno % 100 == 0) || (iAno % 100 == 0 && iAno % 400 == 0))) && (iMes == 2) && (iDia > 29)) || (!((iAno % 4 == 0) && (!(iAno % 100 == 0) || (iAno % 100 == 0 && iAno % 400 == 0))) && (iMes == 2) && (iDia > 28)))
            printf("La fecha no es valida. ");
        /*Calculamos la Fecha que Procede a la Fecha Ingresada*/
        else
        {
            printf("La fecha en formato hexadecimal es: \n0x%X-0x%X-0x%X", iDia, iMes, iAno);
        }

        printf("\n \n");

        printf("Deseas Continuar ingresando fechas (si, no)?: ");
        scanf("%s", &cContinua);

    } while (strcmp(cContinua, "si") == 0);

    return 0;
}
