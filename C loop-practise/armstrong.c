/* Armstrong number */
#include<stdio.h>
int main()
{
    int number, remainder, total=0, temp;
    printf("\n Enter the number ");
    scanf("%d", &number);
    temp=number;
    while(number!=0)
    {
        remainder= number%10;
        number=number/10;
        total=total+(remainder*remainder*remainder);
    }
    if(temp == total)
    {
        printf("\n Number is a armstrong number ");
    }
    else
    {
        printf("\n Number is not armstrong number ");
    }
}