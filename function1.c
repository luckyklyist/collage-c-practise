#include <stdio.h>
int function(int, int, int);
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("smaller number is %d",function(num1, num2, num3));
    return 0;
}
int function(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if (num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}