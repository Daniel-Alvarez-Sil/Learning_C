/**Este Procedimiento Se Encargar de Encontrar el Maximo Valor dentro de un Vector**/

void maxValueOfArray()
{
    int iValues[10], f, iMaxValue;

    for (f = 0; f < 10; f++)
    {
        do{
            printf("Ingresa un valor entero entre 0 y 9: ");
            scanf("%i", &iValues[f]);

            if (iValues[f] < 0 || iValues[f] > 9)
                printf("ERROR: El valor ingresado no se encuentra entre 0 y 9. \n");
        } while (iValues[f] < 0 || iValues[f] > 9);

        if (f > 0)
        {
            if (iMaxValue < iValues[f])
                iMaxValue = iValues[f];
        }
        else if (f == 0)
            iMaxValue = iValues[0];
    }

    printf("\nEl mayor valor es: \n");

    for (f = 0; f < 10; f++)
    {
        printf("- %i", iValues[f]);
        if (iMaxValue == iValues[f])
            printf(" <--- Indice del Valor: %i", f);
        printf("\n");
    }

    printf("\n \n");
}
