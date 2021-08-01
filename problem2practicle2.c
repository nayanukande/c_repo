#include <stdio.h>
int main()
{
  int i, n=1, m;
  printf("Enter the number:");
  scanf("%d", &m);
  printf("Series using loop");

  for (i=0;n<=m;++i)
  {
    printf("%d",n);
    n=n*3;
  }
  return 0;
}
