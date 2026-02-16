/* Find surface area of sphere */
#include<stdio.h>
int main()
{
    float area, radius;
    printf("\n Enter radius of sphere ");
    scanf("%f", &radius);
    area = 4* 3.14 * radius * radius;
    printf("\n Surface area of sphere %f", area); 
}