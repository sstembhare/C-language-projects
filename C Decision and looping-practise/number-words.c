/* Print numbers in words */
#include<stdio.h>
int main()
{
    int number, value=1000;
    printf("\n Enter the number ");
    scanf("%d",&number);
    while(number!=0)
    {
    switch(number/value)
    {
       
        case 1:
        printf("\n One ");
        break;
        case 2:
        printf("\n Two ");
        break;
        case 3:
        printf("\n Three ");
        break;
        case 4:
        printf("\n Four ");
        break;
        case 5:
        printf("\n Five ");
        break;
        case 6:
        printf("\n Six ");
        break;
        case 7:
        printf("\n Seven ");
        break;
        case 8:
        printf("\n Eight ");
        break;
        case 9:
        printf("\n Nine ");
        break;
        default:
        printf("\n Zero ");
    }
    number = number - (number/value)* value;
    value = value/10;
    }
}