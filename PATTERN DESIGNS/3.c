#include<stdio.h>
void main()
{
	int i,j;
	//HERE 'i' REPRESENTS THE ROWS.
	//HERE 'j' REPRESENTS THE COLUMNS
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

printf("\n");
}
