#include <stdio.h>
int main ()
{
  int i,n;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=0;i<n;++i)
  {
    printf("%d", n-i);
    printf("!");
  }
for(i=n;i>=-1;--i)
  { if(n-i==0)
    {
      printf("0");
    }
    else
    {
      printf("%d", n-i);
      printf("!");
    }
  }
  return(0);
}
