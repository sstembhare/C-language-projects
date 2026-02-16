/* Linear search using function in an array */
#include<stdio.h>
void linearsearch(int [], int, int);
int main()
{
    int arr[100], x, range, element;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in an array ");
        scanf("%d", &arr[x]);
    }
    printf("\n Enter the number to search ");
    scanf("%d", &element);
    linearsearch(arr, range, element);
}
void linearsearch(int arr[], int range, int element)
{
    int count, position, x, total=0;
    for(x=0;x<range;x++)
    {
        if(arr[x] == element)
        {
            count++;
            position = x;
            total = 3;
        }
    }
    if(total==3)
    {
        printf("\n The number %d found at position %d occur %d times", element, position, count);
    }
    else
    {
        printf("\n The number not found ");
    }
}