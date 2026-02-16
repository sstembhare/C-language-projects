/* Print number pyramid pattern */
#include<stdio.h>
int main()
{
    int x, y, range,  x2;
    printf("\n Enter the range of number ");
    scanf("%d", &range);
    for(x=1;x<=range;x++, x2=0)
    {
        for(y=1;y<=range-x;y++)
        {
            printf(" ");
        }
        while(x2!=2*x-1)
        {
            printf("#");
            x2++;
        }
        printf("\n");
    }

}