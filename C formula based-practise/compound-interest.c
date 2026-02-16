/* Find compound interest */
#include<stdio.h>
#include<math.h>
int main()
{
    int ci, p, n, r;
    printf("\n Enter principal amount ");
    scanf("%d",&p);
    printf("\n Enter number of years ");
    scanf("%d",&n);
    printf("\n Enter rate of interest ");
    scanf("%d",&r);
    ci = p*pow((1+r/100),n);
    printf("\n Compund interest %d ", ci);
}