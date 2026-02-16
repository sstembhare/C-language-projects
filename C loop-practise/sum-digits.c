/* Sum of all digits of number */
#include<stdio.h>
int main()
{
    int number, remainder, sum=0;
    printf("\n Enter the number ");
    scanf("%d", &number);
    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        sum = sum + remainder;
    }
    printf("\n Sum of digits %d", sum);
}