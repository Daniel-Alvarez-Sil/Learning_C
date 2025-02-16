int timeCalc()
{
    float fDistance, fVel, fMinutos;
    //int iMinutos;
    printf("Ingresa la distancia por recorrer: ");
    scanf("%f", &fDistance);
    printf("Ingresa la velocidad a la que va el vehiculo (km/h): ");
    scanf("%f", &fVel);
    //printf("%f - %i \n",(fDistance/fVel), (int)(fDistance/fVel));
    fMinutos = 60 * (((fDistance/fVel) - (int)(fDistance/fVel)));
    printf("Vas a llegar a tu destino en %i hora(s) y %0.0f minutos(s)", (int)(fDistance/fVel), fMinutos);
    return 0;
}
