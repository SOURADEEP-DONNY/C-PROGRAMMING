//==============================================================================
/* If a four-digit number is input through the keyboard, write a
   program to obtain the sum of the first and last digit of this
   number.
*/
//==============================================================================
#include<stdio.h>
int main()
{
	int n,q,r,s=0;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	if(n>=999 && n<=10000)
	{
		q=n/1000;
		r=n%10;
		s=s+q+r;
		printf("\nSUM OF THE FIRST AND LAST DIGIT IN THE 4-DIGIT NUMBER = %d",s);
	}
	else
	{
		printf("\nTHE ENTERED NUMBER IS NOT A 4-DIGIT NUMBER!!!");
	}
	printf("\n");
	return 0;
}
//==============================================================================