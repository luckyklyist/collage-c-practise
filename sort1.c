#include <stdio.h>
int main(){
int number;
printf("Enter size of array :");
scanf("%d",&number);
int array[number];
for (int i = 0; i < number; i++)
{
    printf("Enter the number :");
    scanf("%d",&array[i]);
}
//logic
//nested loop
for (int i = 0; i < number; i++)
{
    for (int j = (i+1); j < number; j++)
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