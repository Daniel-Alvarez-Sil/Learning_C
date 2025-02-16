int arithmeticSeqSum()
{
    //Definición de variables
    float fa1, fd, fan;
    int in;

    //INPUT del Usuario de los siguientes valores:
        //Primer valor de la secuencia aritmetica
        printf("Ingresa el primer valor de la secuencia aritmetica \n \t a1 = ");
        scanf("%f", &fa1);
        //Diferencia entre los valores de la secuencia aritmetica
        printf("Ingresa el valor de la diferencia comun de los numeros de la secuencia aritmetica \n \t  d = ");
        scanf("%f", &fd);
        //El valor de n (el orden del último valor de la secuencia aritmetica)
        printf("Ingrese el orden del ultimo valor de la secuencia aritmetica \n \t  n = ");
        scanf("%i",&in);
    //Calculamos el valor del último numero de la secuencia aritmetica
    fan = fa1 + (in - 1) * fd;
    //Impresión de valores necesarios para la formula
    printf("\nValores de la secuencia aritmetica:  \n \t d = %0.2f \t a  = %0.2f \t a  = a  = %0.2f \n \t           \t  1         \t  n    %i \n", fd, fa1, fan, in);
    //Calculamos la suma de los elementos de la secuencia aritmetica
    printf("\nSuma de los elementos de la secuencia aritmetica \n \t S = (a  + a ) x n x 0.5 = (%0.2f  + %0.2f) x %i x 0.5 = %0.2f \n \t       1    n", fa1, fan, in, (fa1 + fan) * in * 0.5);
    return 0;
}
