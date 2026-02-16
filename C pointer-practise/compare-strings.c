/* Compare strings using pointer */
#include<stdio.h>
int main()
{
    char string[100], string1[100], *ptr, *ptr1;
    printf("\n Enter string name ");
    scanf("%s",&string);
    printf("\n Enter second string name ");
    scanf("%s",&string1);
    ptr = string;
    ptr1 = string1;
    while(*ptr == *ptr1)
    {
        if(*ptr == '\0' || *ptr1 == '\0')
        {
            break;
        }
        *ptr++;
        *ptr1++;
    }
    if(*ptr =='\0' && *ptr1 == '\0')
    {
        printf("\n Both strings are equal ");
    }
    else
    {
        printf("\n Strings are not equal ");
    }
}
