/**Este Procedimiento Recibe una Cantidad Específica de Segundos y Devuelve la Cantidad de Horas, Minutos y Segundos Correspondientes**/

int secondsTime()
{
    int iNumber, iHours, iMinutes, iSeconds;
    printf("Ingresa una cantidad de segundos: ");
    scanf("%i", &iNumber);
    iHours = iNumber / 3600;
    iMinutes = (iNumber - iHours * 3600) / 60;
    iSeconds = iNumber - iHours * 3600 - iMinutes * 60;
    printf("Los segundos ingresados equivalen a --> %02i:%02i:%02i", iHours, iMinutes, iSeconds);

    printf("\n \n");

    return 0;
}
