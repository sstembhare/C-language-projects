/* Calculate sum of Fibonacci series */
#include<stdio.h>
int main()
{
    int number=0, number2=1, sum=0, range, x=0, total=0;
    printf("\n Enter the range ");
    scanf("%d", &range);
    for(x=0;x<=range;x++)
    {
        if(range<=1)
    {
        printf("\n %d %d", number, number2);
    }
    else
    {
            number = number2;
            number2 = sum;
            sum = number + number2;
            printf("\t %d", sum);
    }
    total = total + sum;
    }
     
     printf("\n sum of fibonacci series %d", total);
    }
   
    