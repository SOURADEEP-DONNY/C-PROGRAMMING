#include<conio.h>
#include<stdio.h>
void fun(int,int);
void main()
{
	int i=5;
	fun(--i,i++);
	fun(++i,i--);
	printf("%d\n",i++);
}
void fun(int x,int y)
{
	printf("%d\n%d\n",x++,y--);
}
