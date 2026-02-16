/* Sum of middle row & column */
#include<stdio.h>
int main()
{
    int arr[100][100], rows, columns, x, y, sumrow, sumcolumn;
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
        sumrow = 0;
        for(y=0;y<columns;y++)
        {
            sumrow = sumrow + arr[1][y];
        }
    }
    for(x=0;x<rows;x++)
    {
        sumcolumn = 0;
        for(y=0;y<columns;y++)
        {
            sumcolumn = sumcolumn + arr[x][1];
        }
    }
    printf("\n sum of row %d ", sumrow);
    printf("\n sum of column %d ", sumcolumn);
}