/* Find sum of diagonal elements */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100][100], x, y, rows, columns, *sum;
    printf("\n Enter rows of matrix ");
    scanf("%d",&rows);
    printf("\n Enter columns of matrix ");
    scanf("%d",&columns);
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            printf("\n Enter the numbers in array ");
            scanf("%d", &arr[x][y]);
        }   
    }
    sum = &arr;
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            if(x==y)
            {
                *sum = *sum + arr[x][y];
            }
        }   
    }
    printf("\n Sum of non-diagonal elements %d", *sum);
}