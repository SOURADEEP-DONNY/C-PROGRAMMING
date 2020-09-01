#include<stdio.h>
void main()
{
	int x=3,y=3;
	while(--x,y--)
	{
		--x;
	}
	printf("%d,%d",x,y);
}
