#include <stdio.h>
int main()
{
    int matrix1[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element %d %d of matrix 1 :",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
        
    }
    int matrix2[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element %d %d of matrix 2 :",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
        
    }
    int sum[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }
    // printing 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}