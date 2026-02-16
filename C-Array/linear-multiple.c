/* Linear search multiple occurences in an array */
#include<stdio.h>
int main()
{
    int arr[100], x, range, position, count, element, total;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    printf("\n Enter the number to search in an array ");
    scanf("%d", &element);
    for(x=0;x<range;x++)
    {
        if(arr[x] == element)
        {
            count = 1;
            position = x;
            total++;
        }
    }
    if(count==1)
    {
        printf("\n The %d number found at position %d and occur %d times", element, position+1, total);
    }
    else
    {
        printf("\n The number not found ");
    }
}