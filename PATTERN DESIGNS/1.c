//WRITE A PROGRAM TO DESIGN A SQUARE WITH "@"


#include<stdio.h>
void main()
{
	int i,j;
	//HERE 'i' REPRESENTS THE ROWS.
	//HERE 'j' REPRESENTS THE COLUMNS
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("@");
		}
		printf("\n");
	}
}