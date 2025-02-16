/**Este Procedimiento Enseña como una Estructura Puede Tener un Vector como Elemento**/

#include <stdio.h>
#include <string.h>

typedef struct employee{
    char cName[15];
    int  iAge;
}emp;

void structWithArrayAsElement()
{
    emp e1, e2 = {"Daniel", 20};

    ///NOTA: Puedes usar el operador de asignacion (=) para copiar la informacion de una estructura a otra
    // Esta copia es real y no es una comparticion de memoria
    // Incluso si la estructura incluye un vector, dicho vector es copiado a su vector correspondiente de la estructura de destino

    e1 = e2;
    printf("Empleado 1.\n\tNombre: %s\n\tEdad: %i\n", e1.cName, e1.iAge);
    printf("Empleado 2.\n\tNombre: %s\n\tEdad: %i\n", e2.cName, e2.iAge);

    printf("\n \n");
}
