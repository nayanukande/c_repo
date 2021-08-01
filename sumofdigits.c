//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main ()
{
  int num, sum=0, rem;
  printf("Enter the number");
  scanf("%d", &num);
  while(num!=0)
  {
    rem=num%10;
    sum=sum+rem;
    num=num/10;

  }
  printf("\n sum of digit of a number is %d, sum");
}
