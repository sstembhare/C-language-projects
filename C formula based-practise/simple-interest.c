/* Find simple interest */
#include<stdio.h>
int main()
{
    int si, p, n, r;
    printf("\n Enter principal amount ");
    scanf("%d",&p);
    printf("\n Enter number of years ");
    scanf("%d",&n);
    printf("\n Enter rate of interest ");
    scanf("%d",&r);
    si = (p * n * r) / 100;
    printf("\n Simple interest %d ", si);
}