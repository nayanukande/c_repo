#include <stdio.h>
  int main()
  {
    int a[10][10],row,col,i,j;
    printf("Enter the number of row of matrix:");
    scanf("%d",&row);
    printf("\nEnter the number of column of matrix:");
    scanf("%d",&col);
    if(row==col)
    {
         for(i=0;i<row;i++)
         {
           for(j=0;j<col;j++)
           {
                printf("Enter[%d][%d] element of matrix:",i+1,j+1);
                scanf("%d",&a[i][j]);
           }
         }
         printf("\nMatrix entered:\n");
         for(i=0;i<row;i++)
         {
           for(j=0;j<col;j++)
           {
             printf("%d",a[i][j]);
           }
           printf("\n");
         }
         printf("Lower triangular matrix:\n");
         for(i=0;i<row;i++)
         {
           for(j=0;j<col;j++)
           {
             if(j>i)
             {
               a[i][j]=0;
               printf("%d",a[i][j]);
             }
           else
           {
             printf("%d",a[i][j]);
           }
         }
         printf("\n");
       }
    }
  }
