/* Sum of diagonal elements */
#include<stdio.h>
int main()
{
    int arr[100][100], rows, columns, x, y, sum=0;
    printf("\n Enter rows in an array ");
    scanf("%d",&rows);
    printf("\n Enter columns in an array ");
    scanf("%d",&columns);
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
        printf("\n Enter the numbers in a matrix ");
        scanf("%d",&arr[x][y]);
        }
    }
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            if(x==y)
            {
                sum = sum + arr[x][y];
            }
        }
    }
    printf("\n Sum of diagonal elements in matrix %d ", sum);   
}