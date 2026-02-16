/* Separate out +ve, -ve and 0s */
#include<stdio.h>
int main()
{
    int x, range, arr[100];
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the number ");
        scanf("%d",&arr[x]);
        if(arr[x]>0)
        {
            printf("\n Positive numbers %d", arr[x]);
        }
        else
        if(arr[x]<0)
        {
            printf("\n Negative numbers %d", arr[x]);
        }
        else
        {
            printf("\n The zero numbers %d", arr[x]);
        }
    }
}