/* Swap using third variable */
#include<stdio.h>
int main()
{
    int x, y, temp;
    printf("\n Enter the number ");
    scanf("%d",&x);
    printf("\n Enter second number ");
    scanf("%d",&y);
    temp = x;
    x = y;
    y = temp;
     printf("\n Two numbers after swapping %d %d ", x, y);
}