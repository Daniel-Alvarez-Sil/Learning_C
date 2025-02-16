//Simple Ciclo de IF y ELSE

int simpleCycle ()
{
    int iA, iB;
    printf("Ingresa el primer valor: ");
    scanf("%i", &iA);
    printf("Ingresa el segundo valor: ");
    scanf("%i", &iB);
    if (iA > iB)
    {
        printf("El numero %i es mayor que el numero %i", iA, iB);
    }
    else
    {
        if(iA < iB)
            printf("El numero %i es mayor que el numero %i", iB, iA);
        else
            printf("Los dos numeros tienen el mismo valor");
    }
    return 0;
}
