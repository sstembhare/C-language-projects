/* Check alphabet is vowel or consonant */
#include<stdio.h>
int main()
{
    char value;
    printf("\n Enter the alphabet ");
    scanf("%s",&value);
    if(value=='a'||value=='e'||value=='i'||value=='o'||value=='u'
    ||value=='A'||value=='E'||value=='I'||value=='O'||value=='U')
    {
        printf("\n The alphabet is a vowel ");
    }
    else
    {
        printf("\n The alphabet is a consonent ");
    }
}