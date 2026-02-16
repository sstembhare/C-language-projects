/* Check number is +ve, -ve or zero */
#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the number ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\n The number is positive ");
    }
    else
    if(number<0)
    {
        printf("\n The number is negative ");
    }
    else
    {
        printf("\n The number is zero ");
    }
}