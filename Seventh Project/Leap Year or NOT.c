/**Este Procedimiento Recibe de Entrada el Valor de una Año y Procede a Validar si el Año es Bisiesto**/

int leapYear()
{
    int iYear, iF;
    for (iF = 0; iF < 25; iF++)
    {
        printf("Ingresa un año: ");
        scanf("%i", &iYear);
        if ((iYear % 4 == 0) && (!(iYear % 100 == 0)|| (iYear % 100 == 0 && iYear % 400 == 0)) )
            printf("El año es bisiesto. ");
        else
            printf("El año no es bisiesto. ");

        printf("\n \n");
    }

    return 0;

}
