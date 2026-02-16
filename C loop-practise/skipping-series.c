/* Print series skipping given numbers */
#include<stdio.h>
int main()
{
    int number, range, x;
    printf("\n Enter the range ");
    scanf("%d", &range);
    printf("\n Enter the number to skip ");
    scanf("%d", &number);
    for(x=1;x<=range;x++)
    {
        if(x==number)
        {
            continue;
        }
       printf("\n %d", x);
    }
}