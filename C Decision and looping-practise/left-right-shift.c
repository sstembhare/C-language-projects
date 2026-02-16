/* Right Shift & Left Shift Operations */
#include<stdio.h>
int main()
{
    char number, number1;
    printf("\n Enter the number ");
    scanf("%s",&number);
    printf("\n Enter the second number ");
    scanf("%s",&number1);
    printf("\n Left shift of number %d : %d", number, number<<1);
    printf("\n Left shift of second number %d : %d", number1, number1<<1);
    printf("\n Right shift of number %d : %d", number, number>>1);
    printf("\n Right shift of second number %d : %d", number1, number1<<1);
}