//==============================PATTERN 28======================================
//                                 1
//                                12A
//                               123AB
//                              1234ABC
//==============================================================================
#include<stdio.h>
void main()
{
	int i,j;
	char ch;
	for(i=1;i<=4;i++)
	{
		ch='1';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i)
			{
				if(j==5){
				ch='A';
				}
				printf("%c",ch);
				ch++;
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