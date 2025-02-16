/**Este Procedimiento Determina Si es Mejor $1,000,000 o tener $0.10 Duplicado Diaramente por 30 Dias**/

int millionQuestion()
{
    int iCounter = 1;
    float fResult = 0.1, fTotal;

    printf("Que es mejor tener, $1,000,000 en este instante, o $0.10 duplicados diariamente por 30 dias? \n \n \n");

    printf("\tPrimera Opcion\n\n\t+$1,000,000\n--------------------------------\n\t=$1,000,000\n\n\n\n");

    printf("\tSegunda Opcion\n\n");

    do{
        printf("\t+$%0.2f\n", fResult);
        fTotal = fTotal + fResult;
        fResult = fResult * 2;
        iCounter++;

    }while (iCounter < 31);

    printf("--------------------------------\n\t$=%0.2f\n\n", fTotal);

    printf("\n \n");

    return 0;
}
