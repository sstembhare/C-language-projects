/* Find last digit of number */
#include<stdio.h>
int main()
{
    int number, remainder;
    printf("\n Enter the number ");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder = number % 10;
        number = number / 10;
        printf("\n Digit of a number %d", remainder);
        break;
    }
    
}