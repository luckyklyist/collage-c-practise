#include <stdio.h>
int main()
{
    int number;
    int result=0;
    int reminders,quotient;
    printf("Enter the number ");
    scanf("%d",&number);
    int n=number;
    while (n!=0)
    {
        reminders=n%10;
        result=result*10+reminders;
        n=n/10;

    }
    if (result==number)
    {
        printf("It is palindrome number .");
    }
    else{
        printf("It is not a palindrome number ");
    }
    
    return 0;
}