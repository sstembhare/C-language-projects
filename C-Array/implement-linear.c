/* Implementation of linear search */
#include<stdio.h>
int main()
{
    int arr[100], x, position, range, element, count;
    printf("\n Enter the range in array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    printf("\n Enter the numbers to search ");
    scanf("%d", &element);
    for(x=0;x<range;x++)
    {
        if(arr[x] == element)
        {
            count = 1;
            position = x;
        }
    }
    if(count == 1)
    {
        printf("\n The number %d found at %d position", element, position+1);
    }
    else
    {
        printf("\n The number not found ");
    }
}