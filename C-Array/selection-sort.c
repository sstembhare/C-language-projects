/* Sort array using selection sort */
#include<stdio.h>
int main()
{
    int arr[100], x, y, range, min, position, temp;
    printf("\n Enter the range ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    for(x=0;x<range;x++)
    {
        position = x;
        for(y=x+1;y<(range-1);y++)
        {
            if(arr[position]>arr[y])
            {
                position = y;
            }
            if(position!=x)
            {
            temp = arr[x];
            arr[x] = arr[position];
            arr[position] = temp;
            }
        }
    }
    printf("\n The sorted array ");
    for(x=0;x<range;x++)
    {
        printf(" \t %d", arr[x]);
    }
}