/* Find difference of two matrices */
#include<stdio.h>
int main()
{
    int arr[100][100], rows, columns, x, y, arr1[100][100], arr2[x][y];
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
        printf("\n Enter the numbers in second matrix ");
        scanf("%d",&arr1[x][y]);
        }
    }
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            arr2[x][y] = arr[x][y] - arr1[x][y];
        }
    }
     printf("\n Difference of two matrix \n");
     for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            printf("\t %d", arr2[x][y]);
        }
        printf("\n");
    }
}