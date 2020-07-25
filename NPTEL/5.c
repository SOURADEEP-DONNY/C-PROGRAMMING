#include<stdio.h>
void main()
{
	int a;
	printf("\nENTER A NUMBER:-");
	scanf("%d",&a);
	while(!(a==-1))// -1 will terminate the loop.
	{
		scanf("%d",&a);
	}
}