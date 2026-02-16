/* Sort numbers in ascending order */       //to study later
#include<stdio.h>
int main()
{
    int *arr, range, x, y, temp;
    printf("\n Enter range of array ");
    scanf("%d",&range);
    for(x=0;x<range;x++)
    {
        printf("\n Enter the numbers in array %d", x+1);
        scanf("%d", arr+x);
    }
    for(x=0;x<range;x++)
    {
        for(y=x+1;y<range;y++)
        {
            if( *(arr+x)> *(arr+y))
            {
                temp = *(arr+x);
                *(arr+x) = *(arr+y);;
                *(arr+y) = temp;
            }
        }
    }
    for(x=0;x<range;x++)
    {
        printf("\n Sorted numbers in array %d %d", x+1, *(arr+x));
        
    }
}