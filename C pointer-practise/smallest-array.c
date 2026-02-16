/* Find smallest number in array */
#include<stdio.h>
int main()
{
    int arr[100], x, range, min, *ptr;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter numbers in an array ");
        scanf("%d",&arr[x]);
    }
    ptr = &arr[0];   
    for(x=0;x<range;x++)
    {
        if(*ptr>arr[x])
        {
           *ptr=arr[x];
        }
    }
    printf("\n Smallest number %d", *ptr);
}