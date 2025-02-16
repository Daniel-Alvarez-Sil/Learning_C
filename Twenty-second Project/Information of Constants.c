/**Este Procedimiento Enseña los Distintos Tipos de Constantes**/

void typeOfConstants()
{
    int iNumber1;

    /// Constante default
    const int iNumber2;  // Tambien puede ser: "const iNumber;"
                         // No podemos modificar el valor de esta variable (ni por medio de punteros)

    /// Un puntero a una constante
    const int *ptr = &iNumber2; // No podemos modificar una constante por medio un puntero
                                // Si podemos modificar la direccion de memoria a la que apunta el puntero

    /// Un puntero constante
    int *const ptr2 = &iNumber1; // No podemos modificar la direccion a la que apunta el puntero
                                 // Si podemos modificar el valor guardado en la direccion de memoria del puntero

    /// Un puntero constante a una constante
    const int *const ptr3 = &iNumber2; // No podemos modificar nada

    printf("\n \n");
}
