/* Swapping two variables */
#include<stdio.h>
int main()
{
    int number, number1, temp, *ptr, *ptr1; 
    printf("\n Enter the number ");
    scanf("%d",&number);
    printf("\n Enter the second number ");
    scanf("%d",&number1);
    ptr = &number;
    ptr1 = &number1;
    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    printf("\n The swapping values of number and second number %d %d",number, number1);
    
}