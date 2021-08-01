#include <stdio.h>
void main()
{
  int a[10][10],sum=0,row,col,i,j;
  printf("Enter the number of row of matrix:");
  scanf("%d",&row);
  printf("\nEnter the nmuber of column of matrix");
  scanf("%d",&col);

    for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
          printf("Enter[%d][%d] element of matrix:",i+1,j+1);
          scanf("%d",&a[i][j]);
        }
      }

    for(i=0;i<row;i++)
      {
        for(j=0;j<col;j++)
        {
          printf("%d",a[i][j]);
        }
        printf("\n");
      }

    for(i=0;i<row;i++)
      {
        sum=0;
        for(j=0;j<col;j++)
        {
          sum=sum+a[i][j];
        }
        printf("\nsum=%d",sum);
      }
    }
