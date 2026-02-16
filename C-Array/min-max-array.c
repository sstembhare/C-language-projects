/* Find max & min array elements */
#include<stdio.h>
int main()
{
    int arr[100],min,max,range,x;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter numbers of array ");
        scanf("%d",&arr[x]);
    }
    min= max =arr[0];
    for(x=0;x<range;x++)
    {
        if(max<arr[x])
        {
            max=arr[x];
        }
        else
        if(min>arr[x])
        {
            min=arr[x];
        }
    }
    printf("\n Maximum element in array %d",max);
    printf("\n Minimum elements in array %d",min);
}