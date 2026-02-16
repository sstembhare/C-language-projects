/* Sum of all +ve & -ve numbers */
#include<stdio.h>
int main()
{
    int srange, range, x, sum=0, nsum=0;
    printf("\n Enter the starting range ");
    scanf("%d", &srange);
    printf("\n Enter the  range ");
    scanf("%d", &range);
    while(x>=srange && x<=range)
    {
        if(x>0)
        {
            sum = sum + x;
        }
        else
        {
            nsum = nsum + x;
        }
        x++;
    }
    printf("\n sum of +ve numbers :%d", sum);
    printf("\n sum of -ve numbers :%d", nsum);
}