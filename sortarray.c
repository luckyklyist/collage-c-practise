#include <stdio.h>
int main(){
int number;//array 5 number =5
printf("Enter the range of the array :");
scanf("%d",&number);
int array[number];// array[5]
for (int i = 0; i < number; i++)// number=5 loop 5 times
{
    printf("Enter the number :");
    scanf("%d",&array[i]);//array[0]=1
}
//logic
for (int i = 0; i < number; i++)
{   
    for (int j = i+1; j < number; j++)
    {
        if (array[i]>array[j])
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        
    }
}
for (int i = 0; i < number; i++)
{
    printf("%d\n",array[i]);
}

return 0;
}