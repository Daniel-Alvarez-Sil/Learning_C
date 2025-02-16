/**En este Procedimiento, Aprendemos a Crear un Documento TXT y a Recibir Informacion de un Documento TXT**/

#include<stdio.h>
#include<stdlib.h>

void createAndReadFile()
{
    /// Paso #1 - Crear un puntero que guarda la direccion de un archivo(FILE)
    FILE *pFile;

    /// Paso #2 - Abrir/Acceder a un archivo
    //  pFile = fopen(<file_name>, <type_of_operation>);
    /// Tipos de operaciones:
    //      - "w": Writing
    //      - "r": Reading
    //      - "a": Appending
    /*pFile = fopen("myFirstFile.txt", "w");*/
    pFile = fopen ("myFirstFile.txt", "r");


    /// Paso #3 - Validar que la operacion de acceder al archivo haya sido exitosa
    if (pFile == NULL)
        printf("ERROR: El sistema no pudo acceder el archivo deseado.");
    else
    {
        printf("El sistema ha accedido correctamente al documento. ");

        /// Paso #4 - Trabajar con el archivo
        /// Paso #5 - Cerrar el documento
        fclose(pFile);
    }


    printf("\n \n");
}
