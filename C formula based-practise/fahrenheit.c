/* Fahrenheit to Celsius conversion */
#include<stdio.h>
int main()
{
    int fahr, celsius;
    printf("\n Enter temperature in celsius ");
    scanf("%d",celsius);
    fahr = (1.8 * celsius) + 32;
    printf("\n Temperature in fahrenheit %d", fahr);
}