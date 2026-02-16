/* Find product of matrices */
#include<stdio.h>
int main()
{
    int arr[100][100], rows1, columns1, rows2, columns2, x, y, d, arr1[100][100], arr2[x][y], sum;
    printf("\n Enter rows in an matrix");
    scanf("%d",&rows1);
    printf("\n Enter columns in an matrix ");
    scanf("%d",&columns1);
    printf("\n Enter rows in second matrix ");
    scanf("%d",&rows2);
    printf("\n Enter columns in second matrix ");
    scanf("%d",&columns2);
    if(columns1!=rows2)
    {
        printf("\n Two matrices cannot be multiplied ");
    }
    else
    {
        for(x=0;x<rows1;x++)
        {
        for(y=0;y<columns1;y++)
        {
        printf("\n Enter the numbers in a matrix ");
        scanf("%d",&arr[x][y]);
        }
         }
        for(x=0;x<rows2;x++)
        {
        for(y=0;y<columns2;y++)
        {
        printf("\n Enter the numbers in second matrix ");
        scanf("%d",&arr1[x][y]);
        }
        }
    
        for(x=0;x<rows1;x++)
        {
        for(y=0;y<columns2;y++)
        {
            for(d=0;d<rows2;d++)
         {
           sum = sum + arr[x][d] * arr1[d][y];
        }
        arr2[x][y] = sum;
        sum = 0;
        }
        }
    printf("\n first matrix \n");
     for(x=0;x<rows1;x++)
    {
        for(y=0;y<columns1;y++)
        {
            printf("\t %d", arr[x][y]);
        }
        printf("\n");
    }
    printf("\n second matrix \n");
     for(x=0;x<rows2;x++)
    {
        for(y=0;y<columns2;y++)
        {
            printf("\t %d", arr1[x][y]);
        }
        printf("\n");
    }
    printf("\n Product of two matrix \n");
     for(x=0;x<rows1;x++)
    {
        for(y=0;y<columns2;y++)
        {
            printf("\t %d", arr2[x][y]);
        }
        printf("\n");
    }
 }
}
