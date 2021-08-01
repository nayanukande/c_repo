#include <stdio.h>
 int main()
 {
   int a[10][10],b[10][10],c[10][10],i,j,row,col;

    printf("Enter no of rows of matrix");
    scanf("%d",&row);

    printf("Enter no of column of matrix");
    scanf("%d",&col);

    printf("\nEnter A Matrix Elements\n");
     for (i=0;i<row;i++)
        {
          for (j=0;j<col;j++)
          {
            printf("Enter matrix of element A[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
          }
        }

        printf("\nEnter B Matrix Elements\n");
         for (i=0;i<row;i++)
            {
              for (j=0;j<col;j++)
              {
                printf("Enter matrix of element B[%d][%d]",i,j);
                scanf("%d",&b[i][j]);
              }
            }

            printf("\nA Matric of Elements are\n");
             for (i=0;i<row;i++)
                {
                  for (j=0;j<col;j++)
                  {
                    printf("%d",a[i][j]);
                  }
                  printf("\n");
                }

                printf("\nB Matric of Elements are\n");
                 for (i=0;i<row;i++)
                    {
                      for (j=0;j<col;j++)
                      {
                        printf("%d",b[i][j]);
                      }
                      printf("\n");
                    }

                 printf("After Subtraction:\n");
                    for(i=0;i<row;i++)
                      {
                        for (j=0;j<col;j++)
                         {
                           c[i][j]=a[i][j]-b[i][j];
                           printf("%d",c[i][j]);
                         }
                         printf("\n");
                       }
}
