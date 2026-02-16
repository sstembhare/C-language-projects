// Implementation of Linear Search 
#include <stdio.h>
void main()
{
	int A[]={3,23,9,18,7,5,72,8};
	int E,i,pos,n;
	clrscr();
	n=sizeof(A)/2; // computes size of an array
	print("Enter Element to search :");
	scanf("%d",&E);
	// Implementation of linear Search 
	for(i=0;i<n;i++)
	{
		if(A[i]==E)
		{
			pos=i; // record found position 
			break;
		}
	}
		//Confirm Search 
	if(i<n)
		printf("Element %d found at position :%d\n",E,pos);
	else if(i>=n)
		printf("Data not found in an array\n");
}

/* Prototype of linear_Search
int Linear(int [],int,int);

int linear(A[],n,E);

*/