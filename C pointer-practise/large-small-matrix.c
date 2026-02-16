/* Find largest & smallest matrix number */    
#include<stdio.h>
int main()
{
    int arr[100][100], x, y, min=0, max=999, *ptr, *ptr1, rows, columns;
    printf("\n Enter the number of rows ");
    scanf("%d", &rows);
    printf("\n Enter the number of columns ");
    scanf("%d", &columns);
    ptr = &min;
    ptr1 = &max;
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
            printf("\n Enter the numbers ");
            scanf("%d", &arr[x][y]);
        }
    }
    for(x=0;x<rows;x++)
    {
        for(y=0;y<columns;y++)
        {
           if(*ptr<arr[x][y])
           {
           *ptr = arr[x][y];
           }
            else
            if(*ptr1>arr[x][y])
            {
                *ptr1 = arr[x][y];
            }
        }
    }
    printf("\n The smallest number %d", *ptr);
    printf("\n The largest number %d", *ptr1);
}