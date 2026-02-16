/* Sort numbers using bubble sort */
#include<stdio.h>
int main()
{
    int arr[100], x, y, range, temp;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    for(x=0;x<range;x++)
    {
        for(y=x+1;y<range;y++)
        {
            if(arr[x]>arr[y])
            {
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
    }
    printf("\n Sorted numbers in array ");
    for(x=0;x<range;x++)
    {
        printf("\n %d", arr[x]);
    }
}