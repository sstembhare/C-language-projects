/* Calculate area of rectangle */
#include<stdio.h>
int main()
{
    float length, width, area;
    printf("\n Enter length and width of rectangle ");
    scanf("%f%f",&length,&width);
    area = length * width;
    printf("\n Area of rectangle %f", area);
}