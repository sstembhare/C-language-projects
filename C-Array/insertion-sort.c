/*Insertion sort in C: C program for insertion sort to sort numbers. This code implements insertion sort algorithm to arrange numbers of an array in ascending order. With a little modification, it will arrange numbers in descending order.
*/
// Insertion sort algorithm implementation in C
/* Insertion sort ascending order */

#include<stdio.h>
int main()
{
    int arr[100], x, y, temp, range;
    printf("\n Enter the range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array ");
        scanf("%d", &arr[x]);
    }
    for(x=1;x<range-1;x++)
    {
        y=x;
        while(y>0 && arr[y-1]>arr[y])
        {
            temp = arr[y];
            arr[y] = arr[y-1];
            arr[y-1] = temp;
            y--;
        }
    }
    printf("\n The sorted array \n");
    for(x=0;x<range;x++)
    {
        printf("\t %d", arr[x]);
    }
}