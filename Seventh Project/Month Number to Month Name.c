/**Este Procedimiento Recibe un Número (1-12) y Devuelve el Nombre del Mes que Corresponda**/

int numberMonth ()
{
    int iNumber;
    char *cMonth;
    printf("Ingresa un numero correspondiente a un mes (1-12): ");
    scanf("%i", &iNumber);
    switch(iNumber)
    {
    case 1:
        cMonth = "Enero";
        break;
    case 2:
        cMonth = "Febrero";
        break;
    case 3:
        cMonth = "Marzo";
        break;
    case 4:
        cMonth = "Abril";
        break;
    case 5:
        cMonth = "Mayo";
        break;
    case 6:
        cMonth = "Junio";
        break;
    case 7:
        cMonth = "Julio";
        break;
    case 8:
        cMonth = "Agosto";
        break;
    case 9:
        cMonth = "Septiembre";
        break;
    case 10:
        cMonth = "Octubre";
        break;
    case 11:
        cMonth = "Noviembre";
        break;
    case 12:
        cMonth = "Diciembre";
        break;
    default:
        printf("El numero ingresado no corresponde a ningun mes. Por favor intenta nuevamente. \n \n");
        return 0;
    }

    printf("El numero ingresado corresponde al mes de %s. \n \n", cMonth);

    printf("\n \n");

    return 0;
}
