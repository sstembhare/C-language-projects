/* Arithmetic progression & its sum */
#include<stdio.h>
int main()
{
    int number, sum=0, x;
    printf("\n Enter the number ");
    scanf("%d",&number);
    sum = (number * (number+1))/2;
    for(x=1;x<=number;x++)
    {
        if(x!=number)
        {
            printf("%d + ", x);
        }
        else
        {
            printf("%d ", x);
        }
    }
    printf("\n Sum of series %d", sum);
}