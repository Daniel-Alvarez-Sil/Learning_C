/**Este Procedimiento Lee una Secuencia e Indica Si la Secuencia es Ascendente o No Es Ascendente**/

int ascOrDescSeq()
{
    int iNumValues, iCounter = 1, iValue1, iValue2 = - 1;

    do {
            printf("Ingresa el numero de valores que vas a ingresar: ");
            scanf("%i", &iNumValues);
            if (iNumValues <= 0)
                printf("ERROR: El valor debe ser mayor que cero. \n");
    }while (iNumValues <= 0);


    printf("\tIngreso de Valores. \n");

    while (iCounter <= iNumValues && iValue2 < iValue1)
    {
        iValue2 = iValue1;
        do{
                printf("\t\tIngresa un valor positivo: ");
                scanf("%i", &iValue1);
                if (iValue1 < 0)
                    printf("\t\tERROR: El valor debe ser positivo. Ingresa un valor positivo. \n");
        }while (iValue1 < 0);

        iCounter++;
    }

    if (iCounter <= iNumValues)
        printf("\nLa secuencia no es ascendente.\n");
    else
        printf("\nLa secuencia si es ascendente.\n");

    printf("\n \n");

    return 0;
}

