/* Armstrong number in an array */
#include<stdio.h>
int main()
{
    int remainder,arr[100],x,range, total, temp, count=0;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d",&arr[x]);
    }
    for(x=0;x<range;x++)
    {
        total=0;
        temp = arr[x];
        while(arr[x]!=0)
        {
            remainder = arr[x] % 10;
            total = total + (remainder * remainder * remainder);
            arr[x] = arr[x] / 10;
        
        if(temp==total)
            {
                 count++;
            }
        }
        
    }
   printf("\n The number of armstrong numbers  %d",count);
}