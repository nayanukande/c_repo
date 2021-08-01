#include<stdio.h>
int cube(int n)
{
int sum,rem;
sum=0;
while(n!=0)
{
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
return sum;
}
int main()
{ 
 int n;
 printf("enter the number\n");
 scanf("%d",&n);
 printf("the sum of cube of digit is : %d",cube(n));
}