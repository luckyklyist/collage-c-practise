#include <stdio.h>
void function(int, int, int);
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    function(num1, num2, num3);
    return 0;
}
void function(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
    {
        printf("%d is smallest", num1);
    }
    else if (num2 < num3)
    {
        printf("%d is smallest", num2);
    }
    else
    {
        printf("%d is smallest", num3);
    }
}