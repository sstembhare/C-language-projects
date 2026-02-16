/* Check number is less than 10 */
#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the number ");
    scanf("%d",&number);
    if(number<10)
    {
        printf("\n The number is less than 10 ");
    }
    else
    {
        printf("\n The number is greater than 10 ");
    }
}