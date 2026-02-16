/* Check numbers are equivalent */
#include<stdio.h>
int main()
{
    int number, number2;
    printf("\n Enter two numbers ");
    scanf("%d%d",&number,&number2);
    if(number==number2)
    {
        printf("\n Two numbers are equal ");
    }
    else
    {
        printf("\n Two numbers are not equal ");
    }
}