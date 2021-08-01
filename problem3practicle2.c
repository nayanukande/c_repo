#include <stdio.h>
int main ()
{
  int n,i;
  printf("Enter the number:");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("Even number\n");
    for(i=1;i<=n/2;++i)
    printf("%d\n",i*2);
  }
  else
  {
    printf("odd number\n");
    for(i=1;i<=n;i+=2)
    printf("%d\n",i);
  }
  return 0;
 }
