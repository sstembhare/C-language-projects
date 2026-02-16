/* Find area of right angle triangle */
#include<stdio.h>
int main()
{
    float area, width, height;
    printf("\n Enter width and height of right angle triangle ");
    scanf("%f%f",&width,&height);
    area = 0.5 * width * height;
    printf("\n Area of right angle triangle %f", area);
}