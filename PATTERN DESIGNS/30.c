//===============================PATTERN 30=====================================
//                                  A
//                                  BA
//                                  CBA
//                                  DCBA
//==============================================================================
#include<stdio.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k=64+i; //everytime changing the value as the line changes.
		for(j=1;j<=4;j++)
		{	
			if(j<=i)
			{
				printf("%c",k);
				k--; // reversing the alphabets "IN THE SAME LINE".			
			}
			else
			{
				printf(" ");
			}	
		}
	printf("\n");
	}
return 0;
}
//==============================================================================