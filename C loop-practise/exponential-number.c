/* Exponential series & its sum */
#include<stdio.h>
int main()
{
    int range, number, x;
    float value = 1, sum = 1;
    printf("\n Enter the range of number ");
    scanf("%d", &range);
    printf("\n Enter the number ");
    scanf("%d", &number);
    for(x=1;x<=range;x++)
    {
        value = value * number/x;
        sum = sum + value;
    }
    printf("\n The exponential value of number %d : %f", number, sum);
}