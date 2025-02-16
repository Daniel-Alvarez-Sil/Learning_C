/**Este Procedimiento Muestra Otros Usos de las Uniones**/

#include<stdio.h>

typedef union cPerson{ ///Uso de TYPEDEF con UNIONS
    int ID;
    char cName[20];
}person;

void moreUsesForUnions()
{
    int f;

    person person1;
    person *pointerToPerson1; ///Podemos usar punteros que guarden la direccion de memoria de una UNION
    printf("Ingresa el ID: ");
    scanf("%i", &person1.ID);
    fflush(stdin);

    printf("ID ingresado: %i \n", person1.ID);
    pointerToPerson1 = &person1;
    (*pointerToPerson1).ID = 11; /// Esta es UNA  forma de modificar la informacion de la UNION a la que apunta un puntero
    pointerToPerson1->ID = 12;   /// Esta es OTRA forma de modificar la informacion de la UNION a la que apunta un puntero
    printf("Despues de modificar via punteros --> ID ingresado: %i \n", person1.ID);

    printf("\n \n");

    person personArray[5];
    for (f = 0; f < 5; f++)
    {
        printf("Ingresa el ID #%i: ", f + 1);
        scanf("%i", &personArray[f].ID);
        fflush(stdin);
    }

    printf("Impresion de IDs. \n");

    for (f = 0; f < 5; f++)
        printf("\tID #%i: %i\n", f + 1, personArray[f].ID);

    printf("\n \n");
}
