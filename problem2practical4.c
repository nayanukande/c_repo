#include <stdio.h>
  int main()
  {
    int a[10][10],b[10][10],c[10][10],i,j,row,col;
    printf("Enter no of rows of matrix");
    scanf("%d",&row);
    printf("Enter no of columns of matrix");
    scanf("%d",&col);
    printf("\nEnter A Matrix Elements\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
        printf("Enter matrix elementA[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
      }
    }
    printf("\nEnter B Matrix Elemnts\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
    {
      printf("Enter matrix element B[%d][%d]",i,j);
      scanf("%d",&b[i][j]);
    }
  }
      printf("\nA Matrix elements are\n");
      for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
        printf("%d",a[i][j]);
      }
      printf("\n");
    }
    printf("\nB Matrix elements are\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
        printf("%d",b[i][j]);
      }
      printf("\n");
    }
    printf("After subtraction:\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
      {
        c[i][j]=a[i][j]-b[i][j];
        printf("%d",c[i][j]);
      }
      printf("\n");
    }
  }
