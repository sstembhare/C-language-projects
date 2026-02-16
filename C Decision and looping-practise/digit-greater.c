/* Check sum of digit greater than 10 */
#include<stdio.h>
int main()
{
    int number, remainder, sum=0;
    printf("\n Enter the number ");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder = number%10;
        number = number/10;
        sum = sum + remainder;
    }
    if(sum >10)
    {
        printf("\n The digit sum is greater than 10 ");
    }
    else
    {
        printf("\n The digit sum is smaller than 10 ");
    }
}