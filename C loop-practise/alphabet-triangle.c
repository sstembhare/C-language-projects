/* Print alphabet right angle triangle */
#include<stdio.h>
int main()
{
    int x, y, range;
    printf("\n Enter the character for right angle triangle ");
    scanf("%d", &range);
    for(x=1;x<=range;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%c", (char)(x+64));
        }
        printf("\n");
    }
}