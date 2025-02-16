/**Este Procedimiento se Encarga de Calcular el Día que Procede al Dia Ingresado**/

#include<stdio.h>

int nextDay()
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
            if (((iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && iDia < 30) || (!(iMes == 2 ||iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11) && iDia < 31) || ((iMes == 2) && iDia < 28) || (((iAno % 4 == 0) && (!(iAno % 100 == 0)|| (iAno % 100 == 0 && iAno % 400 == 0)) ) && (iDia < 29)) || (!((iAno % 4 == 0) && (!(iAno % 100 == 0)|| (iAno % 100 == 0 && iAno % 400 == 0)) ) && iDia < 28) )
            {
                iDia = iDia + 1;
            }
            else
            {
                iDia = 1;
                if (iMes == 12)
                {
                    iMes = 1;
                    iAno = iAno + 1;
                }
                else
                    iMes = iMes + 1;
            }
            printf("Siguiente fecha: \n%02i-%02i-%02i", iDia, iMes, iAno);
        }

        printf("\n \n");

        printf("Deseas Continuar ingresando fechas (si, no)?: ");
        scanf("%s", &cContinua);

    } while (strcmp(cContinua, "si") == 0);

    return 0;
}

