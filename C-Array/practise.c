// prime number in array
#include<stdio.h>
int main()
{
    int arr[100], x, range, y, count=0;
    printf("\n Enter the range ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers ");
        scanf("%d", &arr[x]);
    }
    printf("\n Prime numbers \n");
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
     }
    if(count==2)
    {
        printf("\t %d", arr[x]);
    }
    
} 
