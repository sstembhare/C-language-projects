/* Sum of three digits of a number */
#include<stdio.h>
int main()
{
    int number, remainder, sum;
    printf("\n Enter two digit number ");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
     printf("\n Sum of three digit of a number %d", sum); 
}