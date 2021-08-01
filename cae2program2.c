#include <stdio.h>
int main()
{
int a[5],*p,s1=0,i;
printf("\nEnter Elements:\n");
for(i=0;i<5;i++)
 scanf("%d",&a[i]);

 p=a;

 for(i=0;i<5;i++)
 {
     if(*p %2==0)
        s1=s1+*p;
        p++;
 }
 printf("\nEven sum=%d",s1);

}