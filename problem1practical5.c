#include<stdio.h>
int main()
{	
	int a[50], b[50];
	int i,*pa=&a,n;
	printf("ENTER THE NUMBER OF ELEMENTS");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS OF ARRAY");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("THE ENTERED ARRAY IS\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",a[i]);	
	}
	for(i=n-1 ; i>=0 ; i--)
	{
		b[i]=*pa;
		pa++;
	}
	printf("\nAFTER COPYING IN REVERSE ORDER\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
