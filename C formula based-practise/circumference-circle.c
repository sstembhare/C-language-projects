/* Find circumference of circle */
#include<stdio.h>
int main()
{
    float radius, circum;
    printf("\n Enter radius of circle ");
    scanf("%f",&radius);
    circum = 2 * 3.14 * radius;
    printf("\n Circumference of circle %f", circum);
}