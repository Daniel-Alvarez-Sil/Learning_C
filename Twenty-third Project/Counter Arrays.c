/**Este Procedimiento Muestra como Contar los Elementos de un Vector Usando otro Vector**/

void counterArray()
{
    int iArray[] = {0,1,2,1,2,0,1,0,1,2,0,1,2,0,1,2,0,1,0,2,1,0,0,0,0,1};
    int iCounterArray[3] = {0}, f;

    printf("Secuencia de Numeros. \n");

    for (f = 0; f < 26; f++)
    {
        printf("%i ", iArray[f]);
        iCounterArray[iArray[f]]++;
    }

    printf("\nLa cantidad de 0s es %i", iCounterArray[0]);
    printf("\nLa cantidad de 1s es %i", iCounterArray[1]);
    printf("\nLa cantidad de 2s es %i", iCounterArray[2]);

    printf("\n \n");
}
