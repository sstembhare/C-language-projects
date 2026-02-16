/* Binary search in array */
#include<stdio.h>
int main()
{
    int arr[100], x, l, n, range, mid, element;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    printf("\n Enter the number to search in an array ");
    scanf("%d", &element);
    l=0;
    n=range-1;
    while(l<=n)
    {
        mid = (l+n)/2;
        if(arr[mid] == element)
        {
            printf("\n The number %d found at position %d", element, mid+1);
            goto point;
        }
        if(element<=arr[mid])
        {
            n = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    printf("\n The number not found ");
    point:
}