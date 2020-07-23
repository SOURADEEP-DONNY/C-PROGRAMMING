#include<stdio.h>
void main()
{
int a;
printf("\nEnter a number:-");
scanf("%d",&a);
if(a%6==0)
{
	if(a%4==0)
	{
		printf("%d is divisible by both 6 and 4.\n",a);
	}
}
}