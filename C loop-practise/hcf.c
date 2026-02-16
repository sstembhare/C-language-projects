/* Calculate H.C.F using while loop */
#include<stdio.h>
int main()
{
    int number, number2, x=1, hcf;
    printf("\n Enter two numbers ");
    scanf("%d %d", &number, &number2);
    while(x<=number || x<=number2)
    {
        if((x%number==0) && (x%number2==0))
        {
            hcf = x;
        }
        x++;
    }
    printf("\n HCF of two numbers %d", hcf);
}