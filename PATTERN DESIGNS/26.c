//=============================PATTERN 26=======================================
//                                A
//                               ABA
//                              ABCBA
//                             ABCDCBA
//==============================================================================
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k='A'; //STARTING EACH LINE WITH CHARACTER 'A'.
		for(j=1;j<=9;j++)
		{
			
			if(j>=5-i && j<=3+i)
			{
				
				printf("%c",k);
				j<4?k++:k--;
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