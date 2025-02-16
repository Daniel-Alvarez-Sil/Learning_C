
int rectanglePerimeter()
{
    float heigth;
    float width;

    printf("Insert rectangle's heigth:\n");
    scanf("%f", &heigth);
    printf("Insert rectangle's width:\n");
    scanf("%f", &width);
    printf("The actual rectangle's permieter is: %.2f \n \n", (heigth*2) + (width*2));
    return (0);
}
