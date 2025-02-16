/**Este Procedimiento Muestra como Inicializar Vectores**/

void initializeArrays()
{
    int f;

    //Inicializar un Vector con Todos los Elementos en 0
    int iArrayA[5] = {0};
    for (f = 0; f <= 4; f++)
        printf("Vector A[%i]: %i\n", f, iArrayA[f]);

    printf("\n");

    //Inicializar los Primeros 2 Elementos de un Vector en 0, Mientras que los Demás Elementos Quedan Inicializados en 0
    int iArrayB[5] = {1,2};
    for (f = 0; f <= 4; f++)
        printf("Vector B[%i]: %i\n", f, iArrayB[f]);

    printf("\n\n");
}
