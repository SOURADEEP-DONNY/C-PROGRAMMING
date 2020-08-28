#include<stdio.h>
int main()
{
	int x=10,y=0;
	y=x++ + --x - x++ + x-- + ++x - --x + x++ + ++x;
	printf("%d,%d",y,x);
	return 0;
}
