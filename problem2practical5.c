#include<stdio.h>
int main()
{
	int a, i;
	int *pi = &a;
	printf("ENTER A NUMBER");
	scanf("%d",&a);
	i = *pi * *pi;
	printf("\nSQUARE OF NUMBER %d",i);
	i = *pi * *pi * *pi;
	printf("\nCUBE OF NUMBER %d",i);
}
