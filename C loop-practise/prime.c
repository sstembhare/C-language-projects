/* Check number is prime or not */
#include<stdio.h>
int main()
{
    int number, x, count=0;
    printf("\n Enter the number ");
    scanf("%d", &number);
    for(x=2;x<number;x++)
    {
        if(number%x==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\n Number is prime number ");
    }
    else
    {
        printf("\n Number is not prime number ");
    }
}