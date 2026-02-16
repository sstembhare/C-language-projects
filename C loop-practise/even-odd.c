/* Add even & odd numbers */
#include<stdio.h>
int main()
{
    int range, x, esum=0, osum=0, total=0;
    printf("\n Enter the range");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        if(x%2==0)
        {
            esum = esum + x;
            printf("\n Even numbers : %d", x);
        }
        else
        {
            osum = osum + x;
            printf("\n Odd numbers : %d", x);
        }
    }
    total = esum + osum;
    printf("\n Sum of even numbers : %d", esum);
    printf("\n Sum of odd numbers : %d", osum);
    printf("\n Sum of even and odd numbers : %d", total);
}