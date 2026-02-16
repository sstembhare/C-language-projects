/* Linear search in C language */
#include<stdio.h>
int main()
{
    int arr[100], x, range, position, element, count;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    printf("\n -----------------------------");
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    printf("\n Enter the element to search in an array ");
    scanf("%d", &element );
    for(x=0;x<range;x++)
    {
        if(arr[x]==element)
        {
            position = x;
            count = 1;
        }
    }
    if(count==1)
    {
        printf("\n Number %d found at location %d", element, position+1);
    }
    else
    {
        printf("\n Number not found ");
    }
}