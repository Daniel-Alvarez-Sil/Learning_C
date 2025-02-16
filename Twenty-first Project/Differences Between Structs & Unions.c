/**Este Procedimiento Aborda las Diferencias entre Estructuras y Uniones**/

struct point_struct{ /// In a struct, each element has a separate space in memory
    int x;           /// Thus, there are 8 bytes in memory for both integers (4 bytes each)
    int y;
};

union point_union{ /// In a union, each element points toward the same region in memory
    int x;         /// Thus, there are only 4 bytes in memory for both integers (4 bytes each)
    int y;         /// Due to this, when modifying one element, every other element of a union gets modified
};

void differencesBetweenStructsAndUnions()
{
    struct point_struct point1;
    union point_union point2;

    point1.x = 5;
    point1.y = 10;

    printf("point_struct: (%i,%i) \n", point1.x, point1.y);

    point2.y = 9;

    printf("point_union: (%i,%i) \n", point2.x, point2.y);

    point1.y = 15;

    printf("Despues de modificar --> point_struct: (%i,%i) \n", point1.x, point1.y);

    point2.x = 1;

    printf("Despues de modificar --> point_union: (%i,%i)", point2.x, point2.y);

    printf("\n \n");
}
