#include <stdio.h>
int main()
{   //--------------------for matrix 1----------------------------------
    int matrix1[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the %d %d element of the matrix :", (i + 1), (j + 1));
            scanf("%d", &matrix1[i][j]);
        }
    }
    //-------------------for matrix 2------------------------------------
    int matrix2[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("Enter the %d %d element of the matrix :", (i + 1), (j + 1));
            scanf("%d", &matrix2[i][j]);
        }
    }
    //--------------------------------addition of matrix---------------------------
    int sum[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}