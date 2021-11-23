#include <stdio.h>
#include <conio.h>
int main()
{
    int row, column;
    printf("Enter the row :");
    scanf("%d", &row);
    printf("Enter the column :");
    scanf("%d", &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the %d %d element of the matrix :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("------element of the matrix are ---------");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}