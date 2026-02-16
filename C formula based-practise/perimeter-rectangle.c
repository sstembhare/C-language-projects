/* Find perimeter of rectangle */
#include<stdio.h>
int main()
{
    float length, width, perimeter;
    printf("\n Enter length and width of rectangle ");
    scanf("%f%f",&length,&width);
    perimeter = 2 * length + 2 * width;
    printf("\n Area of rectangle %f", perimeter);
}