int salaryCalc()
{
    //Definicion de variables
    float fHour, fPaypHour;
    //INPUT mediante el usuario de horas trabajadas y pago por hora de trabajo
    printf("Ingresa el numero de horas trabajadas: ");
    scanf("%f", &fHour);
    printf("Ingresa la cantidad de dinero recibida por cada hora de trabajo: ");
    scanf("%f", &fPaypHour);
    //Calculamos el pago del salario
    printf("El pago del salario es de: %0.2f$ MXN", fHour * fPaypHour);
    return 0;
}
