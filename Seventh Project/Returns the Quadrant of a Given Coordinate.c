/**Este Procedimiento se Determina el Cuadrante de una Coordenada**/

int quadrant()
{
    float fX, fY;
    printf("Ingresa las coordenadas (x,y) de un punto en el plano cartesiano. \n");
    printf("X: ");
    scanf("%f", &fX);
    printf("Y: ");
    scanf("%f", &fY);
    printf("El punto correspondiente a las coordenadas -> (%0.2f, %0.2f), se encuentra en el ", fX, fY);
    if  (fX == 0 && fY == 0)
        printf("origen. ");
    else
    {
        if (fX == 0 || fY == 0)
            printf("borde de alguno de los cuadrantes del plano cartesiano. ");
        else
        {
            printf("cuadrante ");
            if (fX > 0 && fY > 0)
                printf("1. ");
            else if (fX < 0 && fY > 0)
                printf("2. ");
            else if (fX < 0 && fY < 0)
                printf("3. ");
            else
                printf("4. ");
        }
    }

    printf("\n \n");

    return 0;

}
