/* Square roots of 1 to 9 numbers */
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float square;
    printf("\n Square root of numbers ");
    for(x=1;x<=9;x++)
    {
        square = sqrt(x);
        printf("\n %d = %.2f", x, square);
    }
}