//=======================================================================
/* Any year is input through the keyboard. Write a program to
   determine whether the year is a leap year or not.
*/
//=======================================================================
#include<stdio.h>
void main()
{
	int year;
	printf("\nEnter the year:-");
	scanf("%d",&year);
	if(year%100==0)
	{
		if(year%400==0)
			printf("\n%d is a leap year.",year);
		else
			printf("\n%d is not a leap year.",year);
	}
	else
	{
		if(year%4==0)
			printf("\n%d is a leap year.",year);
		else
			printf("\n%d is not a leap year.",year);
	}
}
//========================================================================
