int main2()
{
    printf("Ejercicio de Calculadora \n \n");

    int a = 5, b = 2;

    printf("Valores: \n a = %i     b = %i \n \n", a, b);

    printf("a + b = %i + %i = %i \n", a, b, a + b);
    printf("a - b = %i - %i = %i \n", a, b, a - b);
    printf("a x b = %i x %i = %i \n", a, b, a * b);
    printf("a / b = %0.2f / %0.2f = %0.2f \n", (float)a, (float)b, (float)a / b);
    printf("Residuo de a / b = Residuo de %i / %i = %i", a, b, a % b);

}
