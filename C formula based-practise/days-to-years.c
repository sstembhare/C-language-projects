/* Convert days into years */
#include<stdio.h>
int main()
{
    int days, years;
    printf("\n Enter number of days ");
    scanf("%d",&days);
    years = days / 365;
    printf("\n Number of years %d", years);
}