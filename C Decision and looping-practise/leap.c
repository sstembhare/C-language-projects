/* Check for leap year */
#include<stdio.h>
int main()
{
    int year;
    printf("\n Enter the year ");
    scanf("%d",&year);
    if((year%4==0)||(year%100==0)||(year%400==0))
    {
        printf("\n Year is a leap year");
    }
    else
    {
        printf("\n Year is not a leap year");
    }
}