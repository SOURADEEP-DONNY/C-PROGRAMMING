//==============================================================================
/* If a number is input through the keyboard, write a
   program to reverse its digits.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int n,s=0,r;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("Reverse = %d",s);
	printf("\n");
	
}
//==============================================================================