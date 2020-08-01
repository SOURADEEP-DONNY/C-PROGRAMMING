//==============================================================================
/* If a five-digit number is input through the keyboard, write a
   program to print a new number by adding one to each of its
   digits. For example if the number that is input is 12391 then
   the output should be displayed as 23402.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int n,s=0,r;
	int s1=0,r1;
	printf("\nENTER A NUMBER:-");
	scanf("%d",&n);
	if(n>9999 && n<100000)
	{
		while(n!=0)
		{
			r=n%10;
			if(r==9)
			{
				//r=0
				s=(s*10);
				n=n/10;
			}
			else
			{
				s=(s*10)+(r+1);
				n=n/10;
			}
		}
		//printf("\nTHE REVERSE ANSWER IS %d",s);
		//printf("\n");
		while(s!=0)
		{
			r1=s%10;
			s1=(s1*10)+r1;
			s=s/10;
		}
		printf("THE ALTERED NUMBER IS %d",s1);
	}
	else
	{
		printf("\nTHE NUMBER IS NOT A 5-DIGIT NUMBER!!!");
	}
printf("\n");
}
//==============================================================================