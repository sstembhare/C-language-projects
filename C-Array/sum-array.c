/* Construct a single dimension array of integers to find 
list of all elements , sum, average, maximum, minimum */
#include<stdio.h>
int main()
{
    int arr[100], range, x, sum=0, avg, max, min, count=0;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter numbers in an array ");
        scanf("%d", &arr[x]);
    }
    max = min = arr[0];
    printf("\n Numbers in an array ");
    for(x=0;x<range;x++)
    {
        printf("\t %d ", arr[x]);
        sum = sum + arr[x];
        count++;
        if(max<arr[x])
        {
            max = arr[x];
        }
        else
        if(min>arr[x])
        {
            min = arr[x];
        }
    }
    avg = sum / count;
    printf("\n Sum of numbers in array %d", sum);
    printf("\n Average of numbers in array %d", avg);
    printf("\n Maximum number in array %d", max);
    printf("\n Minimum number in array %d", min);
}