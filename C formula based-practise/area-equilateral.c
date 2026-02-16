/* Find area of equilateral triangle */
#include<stdio.h>
#include<math.h>
int main()
{
    float area, side;
    printf("\n Enter side of equilateral triangle ");
    scanf("%f",&side);
    area = sqrt(0.75) * side * side;
    printf("\n Area of equilateral triangle %f", area);
}