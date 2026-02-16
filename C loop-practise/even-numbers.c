/* Sum of first n even numbers */
#include<stdio.h>
int main()
{
    int range, x;
    printf("\n Enter the range of numbers ");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        if(x%2==0)
        {
            printf("\t %d", x);
        }
    }
}