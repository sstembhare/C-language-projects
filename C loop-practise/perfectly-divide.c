/* Number perfectly dividing given number */
#include<stdio.h>
int main()
{
    int number, x, range;
    printf("\n Enter the range of number ");
    scanf("%d", &range);
    printf("\n Enter the number ");
    scanf("%d", &number);
    for(x=1;x<=range;x++)
    {
        if(x%number==0)
        {
            printf("\t %d", x);
        }
    }
}