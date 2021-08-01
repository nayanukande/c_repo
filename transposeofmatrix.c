#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,row,col;
    printf("Enter no of rows of matrix");
    scanf("%d",&row);
    printf("Enter no of columns of matrix");
    scanf("%d",&col);
    printf("\nEnter A Matrix Elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter matrix element A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter B Matrix Elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            B[j][i]=A[i][j];
        }
    }
    printf("\nA Matrix elements are\n ");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    printf("\nB Matrix elements are\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",B[i][j]);
        }
