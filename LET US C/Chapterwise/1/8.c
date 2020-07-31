//==============================================================================
/*If a five-digit number is input through the keyboard, write a
  program to calculate the sum of its digits.
*/
//==============================================================================
#include<stdio.h>
int main()
{
	int n,s=0,r;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		s=s+r;
		
	}
	printf("\nSum = %d",s);
	printf("\n");
	return 0;
}
//==============================================================================