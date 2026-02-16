/* Sum of first & last digit of number */
#include<stdio.h>
int main()
{
    int number, remainder, total=0; 
    printf("\n Enter the number ");
    scanf("%d", &number);
    if(number>10)
    {
        remainder = number % 10;
    }
    while(number>=10)
    {
        number = number/10;
    }
    total = remainder + number;
    printf("\n Sum : %d", total);
}