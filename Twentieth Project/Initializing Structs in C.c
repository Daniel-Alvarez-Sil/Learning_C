/**Este Procedimiento Enseña las Distintas Maneras de Inicializar un Estructura**/

typedef struct coordinate{
    int x;
    int y;
}point;

void initializeStruct()
{
    ///Declarar una estructura sin inicializar
    point p1;
    printf("Punto sin inicializar.\n\tX:%i\n\tY:%i\n", p1.x, p1.y);

    ///Inicializamos una estructura usando valores en orden
    point p2 = { 1, 2 };
    printf("Punto inicializado con valor en orden.\n\tX:%i\n\tY:%i\n", p2.x, p2.y);

    ///Inicializamos una estructura usando los campos correspondiente
    point p3 = { .x = 3, .y = 11 };
    printf("Punto inicializado usando sus campos correspondientes.\n\tX:%i\n\tY:%i\n", p3.x, p3.y);

    ///Inicializamos una estructura usando los campos correspondientes (sin orden)
    point p4 = { .y = 4, .x = 13};
    printf("Punto inicializado usando sus campos correpondientes (sin orden).\n\tX:%i\n\tY:%i\n", p4.x, p4.y);

    ///Inicializamos una estructura usando solo un campo (el otro campo se inicaliza automaticamente a cero)
    point p5 = { .x = 5 };
    printf("Punto inicializado usando solo uno de sus dos campos.\n\tX:%i\n\tY:%i\n", p5.x, p5.y);

    printf("\n \n");
}
