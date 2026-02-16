/* Store & display prime number */
#include<stdio.h>
int main()
{
    int arr[100],x,range,count=0,y;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d",&arr[x]);
    }
    printf("\n Prime numbers \n ");
    for(x=0;x<range;x++)
    {
        count=0;
        for(y=1;y<=arr[x];y++)
        {
            if(arr[x]%y==0)
            {
                count++;
            }
        }
    if(count==2)
    {
        printf("\t %d",arr[x]);
    }
    }
}