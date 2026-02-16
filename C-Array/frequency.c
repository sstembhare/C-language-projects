/* Count frequency of each element */
#include<stdio.h>
int main()
{
    int arr[100],x,range,elt,count=0;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter number of array ");
        scanf("%d",&arr[x]);
    }
    printf("\n Enter number you want to search ");
    scanf("%d",&elt);
    for(x=0;x<range;x++)
    {
        if(elt==arr[x])
        {
            count++;
        }
    }
    printf("\n The search number %d occur %d times ",elt, count);
}