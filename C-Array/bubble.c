/* Sorting of array using bubble sort */
#include<stdio.h>
int main()
{
    char arr[100];
    int range, x, y, temp;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers ");
        scanf("%d", &arr[x]);
    }
    for(x=0;x<range-1;x++)
    {
        for(y=0;y<range-x-1;y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }
    printf("\n Sorted array ");
    for(x=0;x<range;x++)
    {
        printf("\t %d", arr[x]);
    }
}