#include <stdio.h>
int main()
 {
    int a[9],i,s=0,x,y;
    float avg;
    printf("Enter 10 Numbers:\n");
    for(i=0;i<9;i++)
    {
      scanf("%d\t",&a[i]);
      s=s+a[i];
      avg=s/9;
    }
    printf("AVERAGE = %.2f\n",avg);
    x=a[0];
    for(i=0;i<9;i++)
       if (a[i]>x)
       x=a[i];
    printf("\n%d is greatest no",x);
    y=a[0];
    for (i=0;i<9;i++)
      if(a[i]<y)
        y=a[i];
    printf("\n%d is the smallest no",y);
    return 0;
  }
