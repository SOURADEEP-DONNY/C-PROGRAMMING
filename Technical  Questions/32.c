#include<stdio.h>
void fun(int,int);
void main()
{
	int x=10;
	fun(x,x++);
	printf("X: %d\n",x);
}
void fun(int x,int y)
{
	if(x>40)
	{
		return;
	}
	x+=y;
	fun(x,y);
	printf("X: %d\n",x);
}
