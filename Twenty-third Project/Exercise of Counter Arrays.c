/**Este Procedimiento es un Ejercicio Sobre el Uso de Vectores para Contar Vectores**/

void exerciseOfCounterArrays()
{
    int iArray[20] = {5,4,3,2,1,5,4,3,1,2,1,0,0,1,5,2,3,4,0};
    int iCounterArray[6] = { 0 }, f;

    printf("Secuencia de Numeros. \n");
    for (f = 0; f < 20; f++)
    {
        printf("%i ", iArray[f]);
        iCounterArray[iArray[f]]++;
    }

    for (f = 0; f < 6; f++)
        printf("\nEl numero de '%i's en la secuencia es %i ", f, iCounterArray[f]);

    printf("\n \n");
}
