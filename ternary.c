#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age :");
    scanf("%d",&age);
    age>18?printf("You can vote "):printf("You can not vote");
    return 0;
}