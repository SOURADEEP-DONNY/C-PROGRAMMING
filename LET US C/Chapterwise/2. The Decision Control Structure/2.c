//===============================================================
/* Any integer is input through the keyboard. Write a program to
   find out whether it is an odd number or even number.
*/
//===============================================================
#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nEVEN NUMBER!!!");
	}
	else
	{
		printf("\nODD NUMBER!!!");
	}
}
//================================================================
