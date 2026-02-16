/* Swap without third variable */
#include<stdio.h>
int main()
{
    int x, y, temp;
    printf("\n Enter the number ");
    scanf("%d",&x);
    printf("\n Enter second number ");
    scanf("%d",&y);
    x = x + y;
    y = x - y;
    x = x - y;
     printf("\n Two numbers after swapping %d %d ", x, y);
}