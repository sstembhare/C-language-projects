/* Print right angle triangle pattern */
#include<stdio.h>
int main()
{
    int range, x, y;
    printf("\n Enter the range of number ");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("\t x");
        }
        printf("\n");
    }
}