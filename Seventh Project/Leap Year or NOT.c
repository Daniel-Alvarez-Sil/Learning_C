/**Este Procedimiento Recibe de Entrada el Valor de una A�o y Procede a Validar si el A�o es Bisiesto**/

int leapYear()
{
    int iYear, iF;
    for (iF = 0; iF < 25; iF++)
    {
        printf("Ingresa un a�o: ");
        scanf("%i", &iYear);
        if ((iYear % 4 == 0) && (!(iYear % 100 == 0)|| (iYear % 100 == 0 && iYear % 400 == 0)) )
            printf("El a�o es bisiesto. ");
        else
            printf("El a�o no es bisiesto. ");

        printf("\n \n");
    }

    return 0;

}
