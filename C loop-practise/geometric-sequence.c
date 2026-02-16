/* Sum of Expanded Geometric Sequence */
#include<stdio.h>
#include<math.h>
int main()
{
    int number, ratio, sum=0, range, value=0;
    printf("\n Enter the number ");
    scanf("%d", &number);
    printf("\n Enter the ratio ");
    scanf("%d", &ratio);
    value = 1 - pow(ratio, range);
    sum = number * value/ 1 - ratio;
    printf("\n Sum of geometric sequence %d", sum);
}