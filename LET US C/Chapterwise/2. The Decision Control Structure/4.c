/* =============================================================
   A five-digit number is entered through the keyboard. Write a
   program to obtain the reversed number and to determine
   whether the original and reversed numbers are equal or not.
*/
//==============================================================
#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("\nEnter a number:-");
	scanf("%d",&n);
	if(n>9999 && n<100000)
	{
		int n1;
		n1=n;
		while(n!=0)
		{
			r=n%10;
			s=s*10+r;
			n=n/10;
		}
		if(s==n1)
			printf("%d IS A PALLINDROME NUMBER!!!",n1);
		else
			printf("%d IS NOT A PALLINDROME NUMBER!!!",n1);
		
	}
	else
	{
		printf("\nNOT A 5 DIGIT NUMBER!!!");
	}
}
//================================================================
