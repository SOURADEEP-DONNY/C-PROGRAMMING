//==============================PATTERN 18======================================
//                               6543210
//                               543210
//                               43210
//                               3210
//                               210
//                               10
//                               0
//==============================================================================
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<=7;i++)
	{
		k=6-i;
		for(j=0;j<=7;j++)
		{
			if(j>=1&&j<=7-i)
			{
				printf("%d",k);
				k--;
			}
			else
			{
				printf(" ");
			}
		}
	printf("\n");
	}
}
//==============================================================================