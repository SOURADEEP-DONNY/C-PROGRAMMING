#include<stdio.h>
#include<conio.h>
int main()
{
	char a[100];
	int i=0,count=0;
	printf("\nEnter a String:-");
	scanf("%[^\n]s",a);
	if(a[0]==' ')
	{
		count=0;
	}
	else
	{
		count=1;
	}
	while(a[i]!='\0')
	{
		if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0')
		{
			count=count+1;
		}
		i++;
	}
	printf("Total=%d",count);
	return 0;
}
