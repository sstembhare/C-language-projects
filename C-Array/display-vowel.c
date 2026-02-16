-/* Construct a single dimension array 
list all elements, find all strings start with vowels  */
#include<stdio.h>
#include<string.h>
int isvowel(char ch)
{
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    int x;
    for(x=0;x<10;x++)
    {
        if(ch == vowels[x])
        {
           return 1;
        }
    }
    return 0;
}
int main()
{
    char str[100], word[100];
    int x=0, y=0, ch, count=0;
    printf("\n Enter the words in array ");
    gets(str);
    printf("\n Words starting with vowels ");
    while(str[x]!='\0')  
    {
        if(str[x]==' ')
        {
            word[y]='\0';
            y=0;
            if(isvowel(word[y]))
            {
                printf("\n %s", word);
                count++;
            }
            x++;
            continue;
        }
    word[y++]=str[x];
    x++;
    }
    word[y]='\0';
    if(isvowel(word[0]))
    {
        printf("\n %s", word);
        count++;
    }
    printf("\n Number of words starting with vowels %d", count);
    return 0;
}