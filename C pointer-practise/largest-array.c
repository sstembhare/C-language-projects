/* Find largest element in array */
#include<stdio.h>
int main()
{
    int range, arr[100], x, *max;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d",&arr[x]);
    }
    max = &arr[0];
    for(x=0;x<range;x++)
    {
        if(*max<arr[x])
        {
            *max = arr[x];
        }
    }
    printf("\n Largest element in array %d", *max);
}