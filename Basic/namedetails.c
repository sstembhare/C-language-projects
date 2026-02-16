/* Program of C language to print name & details */
#include<stdio.h>
void main()
{

    char name[40],Add[130],state[40];
    int age;
    int d, m, y;
    printf("\n \t\t Enter your Name :");
    scanf("%s",&name);
    printf("\n \t\t Enter Date:");
    scanf("%d",&d);

    printf("\n \t\t Enter month : ");
    scanf("%d",&m);

    printf("\n \t\t Enter year");
     scanf("%d",&y); 

    printf("\n \t\t Enter your age :");
    scanf("%d", &age);
    printf("\n \t\t Enter Address :");
    scanf("%s", &Add);
    printf("\n \t\t Enter State :");
    scanf("%s", &state);
    printf("\n Full name :%s",name);
    printf("\n Date of Birth :%d/%d/%d",d,m,y);
    printf("\n Age :%d",age);
    printf("\n Address :%s",Add);
    printf("\n State : %s",state);

   
      
}