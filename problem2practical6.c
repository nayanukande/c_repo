#include<stdio.h>
#include<string.h>
  int a;
  int inpu(int n);
  int outp(int m);
int main()
{
    int s,i,t;
    s=inpu(a);
    t=outp(a);
}
int inpu(int n)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a;
}
int outp(int m)
{
    int i,j;
    for(i=1; i<=10; i++)
    {
        j=i*a;
        printf("\n%d * %d = %d\n",a,i,j);
    }
    return 0;
}