/* Find area of triangle */
#include<stdio.h>
int main()
{
    float length, base, area;
    printf("\n Enter length and base of triangle ");
    scanf("%f%f",&length,&base);
    area = 0.5 * length * base;
    printf("\n Area of tringle %f", area);
}