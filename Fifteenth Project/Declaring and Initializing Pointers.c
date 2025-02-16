/**Este Procedimiento Explica como Declarar, Inicializar e Imprimir Punteros**/

void initializePointer()
{
    //Declaramos e Inicializamos un Entero
    int iNumber = 16;

    //Declaramos un Puntero de Tipo Entero
    int *p;

    //Asignamos a Nuestro Puntero la Direccion de una Variable
    p = &iNumber;

    //Imprimimos las Direcciones de Memoria del Puntero y de la Variable (NOTA: son direcciones equivalentes)
    printf("La direccion de nuestra variable: %p\n", &iNumber);
    printf("La direccion almacenada en nuestro puntero: %p\n\n", p);

    //Imprimimos el Valor Almacenado en la Direccion de Memoria del Puntero y de la Variable Original (NOTA: son direcciones equivalentes)
    printf("El valor de nuestra variable: %i\n", iNumber);
    printf("El valor al que apunta la direccion de nuestro puntero: %i", *p);

    printf("\n \n");
}
