/* Print division scored by student */
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3, total, grade, per;
    printf("\n Enter marks of three subjects ");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
    total = sub1+sub2+sub3;
    per = (total * 100)/300;
    if(per>=75)
    {
        printf("\n Grade I ");
    }
    else
    if(per>=50)
    {
        printf("\n Grade II ");
    }
    else
    {
        printf("\n Grade III ");
    }
}