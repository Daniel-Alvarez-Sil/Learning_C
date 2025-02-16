//This procedure receives an x amount of seconds for an input an returns the total amount of hours, minutes, and seconds which compose the original information

int secondCalc()
{
    /*Variable Definitions*/
    int iSec;
    /*Input from USER*/
    printf("Enter an amount of seconds: ");
    scanf("%i", &iSec);
    /*Output of Seconds in Formatted Form*/
    printf("\nAmount of Time Converted to Standard Format --> ");
    printf("%0.2i:%0.2i:%0.2i \n \n", iSec / 3600, (iSec % 3600) / 60, (iSec - (iSec / 3600) * 3600 - 60 * ((iSec % 3600) / 60)));
    return 0;
}
