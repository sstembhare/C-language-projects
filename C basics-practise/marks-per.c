/* Find total marks & percentage  */
#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total, per;
    printf("\n Enter marks of five subjects ");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total = sub1 + sub2 + sub3 + sub4 +sub5;
    per = (total * 100) / 500;
    printf("\n Total marks & percentage %d %d ", total, per);
}