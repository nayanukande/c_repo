#include<stdio.h>
int main()
{
	char a[100],*s;
	int p=0, q=0;
	printf("ENTER THE STRING:\n");
	gets(a);
	s=a;
	while(*s != '\0')
	{
		p++;
		s++;
		if(*s==32)
		{
			q++;
		}
	}
	printf("\n LENGHT OF STRING \n");
	printf("INCLUDING SPACES :%d",p);
	printf("\nEXCLUDING SPACES :%d",p-q);
}