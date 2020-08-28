#include<stdio.h>
void main()
{
	char sports[]="CRICKET";
	int x=1,y;
	y=x++ + ++x;
	printf("%c",sports[++y]);
}
