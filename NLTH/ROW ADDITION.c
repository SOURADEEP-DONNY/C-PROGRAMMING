
#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[100][100];
	int r,c,i,j;
	int temp;
	int sum[100];
	int max=1;
	
	printf("\nROWS=");
	scanf("%d",&r);
	
	printf("\nCOLUMNS=");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<r;i++)
	{
		sum[i]=0;
		for(j=0;j<c;j++)
		{
			sum[i]=sum[i]+mat[i][j];
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		printf("%d\n",sum[i]);
	}
	for(i=0;i<r;i++)
	{
	    if(sum[0]<sum[i+1])
	    {
	        temp=sum[0];
	        sum[0]=sum[i+1];
	        sum[i+1]=temp;
	        max=max+1;
	    }
	}
	printf("\nRow %d is having the maximum sum %d",max,sum[0]);
	return 0;
}