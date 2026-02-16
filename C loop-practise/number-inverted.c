/* Print numbered inverted right angle triangle */
#include<stdio.h>
int main()
{
    int x, y, range;
    printf("\n Enter the range ");
    scanf("%d", &range);
    for(x=range;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d", x);
        }
        printf("\n");
    }
}