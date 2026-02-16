/* Numbers not divisible by 2, 3, 5 */
#include<stdio.h>
int main()
{
    int range, x;
    printf("\n Enter range of numbers ");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        if((x%2!=0)&&(x%3!=0)&&(x%5!=0))
        {
            printf("\t %d", x);
        }
    }
}