/* Develop two arrays to store name,age sort them as per ascending age

Sort them as per ascending name

if more than 2 elements having same name ,then sort as per their age

Harsh 22
Harsha 28
Ruchi 11
Ruchi 27
Shweta 8
Vidya 17

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][40], temp[40], temp1; 
    int x, y, age[40], min, count=0, range;
    printf("Enter range for string :\n");
    scanf("%d", &range);
    
    for(x=0; x<range; x++)
    {
        printf("\n Enter names in array ");
        scanf("%s", &str[x]);
    }
    for(x=0;x<range;x++)
    {
        printf("\n Enter the age ");
        scanf("%d", &age[x]);
    } 
   
    for(x=0; x<range-1; x++)
    {
        for(y=0; y<range-x-1; y++)
        {
            if(strcmp(str[y], str[y+1])>0 )
            {
                strcpy(temp, str[y]);
                strcpy(str[y], str[y+1]);
                strcpy(str[y+1], temp);
                
                temp1 = age[y];
                age[y] = age[y+1];
                age[y+1] = temp1; 
            }
            if(strcmp(str[y], str[y+1]) == 0 )
            {
                if(age[y]>age[y+1])
                {
                    temp1 = age[y];
                    age[y] = age[y+1];
                    age[y+1] = temp1;
                }
            }
        }
    }
    printf("\nNames in Alphabetical Order : \n");
    for(x=0; x<range; x++)
    {
        printf("\n Names in alphabetical order %s %d",str[x], age[x]);
    }
}