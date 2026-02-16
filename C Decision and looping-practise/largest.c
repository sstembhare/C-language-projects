/* Largest amongst three numbers */
#include<stdio.h>
int main()
{
    int number, number1, number2;
    printf("\n Enter three numbers ");
    scanf("%d%d%d",&number,&number1,&number2);
    if((number>number1)&&(number>number2))
    {
        printf("\n The greatest number :%d",number);
    }
    else
     if((number1>number)&&(number1>number2))
    {
        printf("\n The greatest number :%d",number1);
    }
    else
    {
        printf("\n The greatest number :%d",number2);
    }
}