/* Count zeroes in a matrix */
#include<stdio.h>
int main()
{
    int arr[100][100], rows, columns, x, y, count=0;
    printf("\n Enter rows in an array ");
    scanf("%d",&rows);
    printf("\n Enter columns in an array ");
    scanf("%d",&columns);
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
        printf("\n Enter the numbers in an array ");
        scanf("%d",&arr[x][y]);
        }
    }
    printf("\n Two dimensional array \n");
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            if(arr[x][y]==0)
            {
                count++;
            }
        }
    }
    printf("\n The number of zero's in array %d ", count);
}