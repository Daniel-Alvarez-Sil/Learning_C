/*Este Procedimiento se Encarga de Obtener el Mayor y Menor Numero*/

int biggerSmaller()
{
    float d1, d2;
    printf("Ingresa el primer valor: ");
    scanf("%f", &d1);
    printf("Ingresa el segundo valor: ");
    scanf("%f", &d2);
    if (d1 > d2)
        printf("El numero %0.2f es el mayor", d1);
    else
    {
        if(d2 > d1)
            printf("El numero %0.2f es el mayor", d2);
        else
            printf("Los dos numeros tienen el mismo valor");
    }
    return 0;
}
