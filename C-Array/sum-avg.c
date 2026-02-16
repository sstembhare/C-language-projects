/* Find sum and average */
#include<stdio.h>
int main()
{
    int x, sum, avg, arr[100], range, count;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d",&arr[x]);
    }
    for(x=0;x<range;x++)
    {
        sum = sum + arr[x];
        count++;
    }
    avg = sum / count;
    printf("\n Sum and average of numbers in array %d %d", sum, avg);
}