/* Print mixed right angle triangle */
#include<stdio.h>
int main()
{
    int x, y, range;
    printf("\n Enter the range ");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf(" # ");
        }
        printf("\n");
    }
    printf("\n");
    for(x=range;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            printf(" # ");
        }
        printf("\n");
    }
}