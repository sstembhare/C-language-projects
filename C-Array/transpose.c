/* Find transpose of matrix */
#include<stdio.h>
int main()
{
    int arr[100][100], x, y, rows, columns;
    printf("\n Enter rows in a matrix ");
    scanf("%d",&rows);
    printf("\n Enter columns in a matrix ");
    scanf("%d",&columns);
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            printf("\n Enter the numbers in array ");
            scanf("%d", &arr[x][y]);
        }
    }
    printf("\n Transpose of matrix \n");
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            printf("\t %d", arr[y][x]);
        }
        printf("\n");
    }
}