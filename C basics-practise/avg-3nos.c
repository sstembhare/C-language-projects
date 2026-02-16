/*  Average of three numbers */
#include<stdio.h>
int main()
{
    int number, number1, number2, sum, avg;
    printf("\n Enter the three numbers ");
    scanf("%d%d%d",&number,&number1,&number2);
    sum = number + number1 + number2;
    avg = sum /3;
    printf("\n Average of three numbers %d ", avg);
}