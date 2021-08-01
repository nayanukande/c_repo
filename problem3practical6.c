#include<stdio.h>
int call (int *a, int *b);
int main()
{
    int x,y;
    printf("Enter the value of A:");
    scanf("%d", &x);
    printf("Enter the value of B:");
    scanf("%d", &y);
    printf("Value of A=%d\t B=%d",x,y);   
    call(&x, &y);
    printf("\nSwapped values of A=%d\tB=%d",x,y);
    return 0;
}
int call (int *a, int *b)
{
    int i;
    i=*b;
    *b=*a;
    *a=i;
}