#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number of range :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}