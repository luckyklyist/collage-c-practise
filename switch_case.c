#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("The day is sunday .");
        break;
    case 2:
        printf("The day is monday");
        break;
    case 3:
        printf("The day is tuesday");
        break;
    case 4:
        printf("The day is Wednesday");
        break;
    case 5:
        printf("The day is Thursday");
        break;
    case 6:
        printf("The day is friday");
        break;
    case 7:
        printf("The day is Saturday");
        break;
    default:
        printf("Invalid option .");
    }
    return 0;
}