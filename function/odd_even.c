#include <stdio.h>
//function declaration
void odd_even(int);
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    odd_even( number);// function call
    return 0;
}
//function declaration
void odd_even(int num){
    if(num%2==0){
        printf("It is even number .");
    }
    else{
        printf("It is odd number ");
    }
}