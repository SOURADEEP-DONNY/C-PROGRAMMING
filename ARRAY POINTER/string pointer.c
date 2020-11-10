//LENGTH OF A STRING USING CHARACTER POINTER.
//--------------------------------------------
#include<stdio.h>
#include<conio.h>
int length(char *);
void main()
{
	char a[15]="SOURADEEP";
	printf("%d",length(a));
	getch();
}
int length(char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++);
	return(i);
}
//--------------------------------------------
