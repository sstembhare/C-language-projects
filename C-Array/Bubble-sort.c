/* Sorting array using Bubble sort */
#include<stdio.h>
int main()
{
    int arr[100], x, y, temp, range;
    printf("\n Enter range of array ");
    scanf("%d", &range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in an array ");
        scanf("%d", &arr[x]);
    }
    for(x=0;x<range-1;x++)
    {
        for(y=0;y<range-x-1;y++)
        {
            if(arr[y]>arr[y+1])
            {
                temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }
    printf("\n Array after sorting \n");
    for(x=0;x<range;x++)
    {
        printf("\t %d", arr[x]);
    }
}



   