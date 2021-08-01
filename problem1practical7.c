#include<stdio.h>
int p(int,int);
int q(int,int);
int r(int,int);
 int main()
 {
     int w,x,y,z,a,b,HCF;
     printf("Enter the first number=");
     scanf("%d",&w);
     printf("Enter the second number=");
     scanf("%d",&x);
     printf("Enter the third number=");
     scanf("%d",&y);
     printf("Enter the fourth number=");
    scanf("%d",&z);
    a=p(w,x);
    b=q(y,z);
    HCF=r(a,b);
    printf("\nHCF of the numbers%d,%d,%d,%d=%d",w,x,y,z,HCF);
    return 0;
 }
 int p(int w, int x)
 {
     int rem;
     rem = w%x;
     if(rem==0) return x;
     else return (p(x,rem));
 }
 int q(int y, int z)
 {
     int rem;
     rem = y%z;
     if(rem==0) return z;
     else return(q(z,rem));
 }
 int r(int a, int b)
 {
     int rem;
     rem = a%b;
     if(rem==0) return b;
     else return (r(b,rem));
 }