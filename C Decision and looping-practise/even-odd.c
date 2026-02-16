/* Check if number is even or odd */
#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the number ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\n Number is even ");
    }
    else
    {
        printf("\n Number is odd ");
    }
}