/* Perform arithmetic operations */
#include<stdio.h>
int main()
{
    float number, number1, sum, sub, multi, div;
    char op;
    printf("\n Enter two numbers ");
    scanf("%f%f",&number, &number1);
    printf("\n Enter arithematic operation you want to perform ");
    scanf("%s", &op);
    switch(op)
    {
        case '+' :
        sum = number + number1;
        printf("\n Sum of two numbers %f", sum);
        break;
        case '-':
        sub = number - number1;
        printf("\n Subtraction of two numbers %f", sub);
        break;
        case '*':
        multi = number * number1;
        printf("\n Multiplication of two numbers %f",multi);
        break;
        case '/':
        div = number / number1;
        printf("\n Division of two numbers %f",div);
        break;
        default:
        printf("\n Enter proper arithematic operation ");
    }
}