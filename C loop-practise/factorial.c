/* Print factorial of a number */
#include<stdio.h>
int main()
{
    int fact=1, x, number;
    printf("\n Enter the number ");
    scanf("%d", &number);
    for(x=1;x<=number;x++)
    {
        fact = fact * x;
    }
    printf("\t Factorial of number %d", fact);
}