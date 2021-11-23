#include <stdio.h>
int main(){
int a=4;
int b=5;
//exchange
int temp=a;
a=b;
b=temp;
printf("The value of a and b is %d and %d",a,b);
return 0;
}