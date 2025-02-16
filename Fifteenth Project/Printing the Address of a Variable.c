/**Este Procedimiento Contiene la Sintaxis para Imprimir la Direccion en Memoria de una Variable**/

void printAddress()
{
    int iNumber1 = 13, iNumber2 = 14;

    //Imprimimos los Valores de las Variables
    printf("El valor de la variable 1 es: %i\n", iNumber1);
    printf("El valor de la variable 2 es: %i\n\n", iNumber2);

    //Imprimimos las Direcciones de las Variables
    printf("La direccion de la variable 1 es: %p\n", &iNumber1);
    printf("La direccion de la variable 2 es: %p", &iNumber2);

    printf("\n \n");
}
