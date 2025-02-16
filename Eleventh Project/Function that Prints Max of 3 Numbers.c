/**Esta Función, Dados 3 Valores, Imprime el Valor Maximo**/

int maxOf3()
{
    int iNum1, f, iMax = 0;

    for (f = 1; f <= 3; f++)
    {
        do{
            printf("Ingresa un valor entero mayor a cero: ");
            scanf("%i", &iNum1);
            if (iNum1 <= 0)
                printf("ERROR: El valor ingresado debe ser mayor a cero. \n");
        }while (iNum1 <= 0);

        if (iNum1 > iMax)
            iMax = iNum1;
    }

    return iMax;
}

