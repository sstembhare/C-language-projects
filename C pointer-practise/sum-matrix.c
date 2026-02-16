/* Find sum of all matrix elements */
#include<stdio.h>
int main()
{
    int rows, columns, arr[100][100], x, y, sum=0, *ptr;
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
    ptr = &arr;
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
           sum = sum + *ptr;
        }   
    }
    printf("\n Sum of all matrix elements %d", sum);
}