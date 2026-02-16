/* Calculate volume of sphere */
#include<stdio.h>
int main()
{
    float volume, radius;
    printf("\n Enter radius of sphere ");
    scanf("%f", &radius);
    volume = 1.33 * 3.14 * radius * radius * radius;
    printf("\n Volume of sphere %f", volume); 
}