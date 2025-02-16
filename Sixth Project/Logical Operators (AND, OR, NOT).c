/**Este Procedimiento Detalla el Uso de los Operadores Logicos**/

int logOperators()
{
    float fGrades, fMoney;
    printf("Uso del Operador Logico, AND\n");
    printf("Ingresa tus promedio final en la escuela: ");
    scanf("%f", &fGrades);
    printf("Ingresa el saldo de tu cuenta bancaria: ");
    scanf("%f", &fMoney);
    if(fGrades > 85.0 && fMoney < 100)
        printf("Te hemos transferido 1 galleta y 5 dolares. \n \n \n");
    else
        printf("Te hemos transferido una manzana. \n \n \n");

    float fGrade1, fGrade2;
    printf("Uso del Operador Logico, OR\n");
    printf("Ingresa tu calificacion de Matematicas: ");
    scanf("%f", &fGrade1);
    printf("Ingresa tu calificacion de Historia de Mexico: ");
    scanf("%f", &fGrade2);
    if (fGrade1 > 80.0 || fGrade2 > 80.0)
        printf("¡Felicidades por sacar mas de 80 en al menos una de las calificaciones! \n \n \n");
    else
        printf("¿Que paso? No sacaste mas de 80 en ninguna materia. \n \n \n");

    float fSaldo;
    printf("Uso del Operador Logico, NOT\n");
    printf("Ingresa el saldo de tu cuenta bancaria: ");
    scanf("%f", &fSaldo);
    if (!(fSaldo > 50))
        printf("Tienes menos de 50 conejo-dolares, te hemos transferido 20 conejo-dolares");
    else
        printf("Tienes un buen saldo. Felicidades ");

    return 0;

}
