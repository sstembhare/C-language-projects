/* Find area of square */
#include<stdio.h>
int main()
{
    float side, area;
    printf("\n Enter sides of square ");
    scanf("%f", &side);
    area = side * side;
    printf("\n Area of square %f", area);
}