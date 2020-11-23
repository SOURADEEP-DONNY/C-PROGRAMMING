#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[50][50];
	int i,j,row,col;
	
	printf("\nROW=");
	scanf("%d",&row);
	
	printf("\nCOLUMN=");
	scanf("%d",&col);
	
	// TAKING INPUT
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	
	//SHOWING THE MATRIX
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
