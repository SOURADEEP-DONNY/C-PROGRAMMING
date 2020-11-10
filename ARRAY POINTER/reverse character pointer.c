#include<stdio.h>
#include<conio.h>
int length_func(char *);
char* reverse(char*);
void main()
{
	char a[20]="FOOTBALL";
	length_func(a);
	
	printf("\n%s",reverse("SOURADEEP"));
	getch();
}
int length_func(char *ptr)
{
	int i;
	for(i=0;*(ptr+i)!='\0';i++);
	return(i);
}
char* reverse(char *p)
{
	int i,l;
	char t;
	for(l=0;*(p+l)!='\0';l++); //CALCULATING THE LENGTH
	
	for(i=0;i<l/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+l-1-i);
		*(p+l-1-i)=t;
	}
	return(p);
}
