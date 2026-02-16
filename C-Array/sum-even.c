/* Sum of even numbers in array */
#include<stdio.h>
int main()
{
    int arr[100],x,range,sum=0;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers ");
        scanf("%d",&arr[x]);
    }
    for(x=0;x<range;x++)
    {
        if(arr[x]%2==0)
        {
            sum = sum + arr[x];
        }
    }
    printf("\n Sum of even numbers in array %d",sum);
}