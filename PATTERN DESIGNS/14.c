//==============================PATTERN 13======================================
//                                   *
//                                  ***
//                                 *****
//                                *******
//                                 *****
//                                  ***
//                                   *
//============================================================================
//GENERALIZING THE PATTERN
#include<stdio.h>
int main()
{
	int i,rows,j,k=0,n;
	printf("\nEnter number of rows:-");
	scanf("%d",&rows);
	n=(rows+1)/2;
	for(i=1;i<=rows;i++)
	{
		i<=n?k++:k--;
		for(j=0;j<=rows;j++)
		{
			if(j>=(n+1)-k&&j<=(n-1)+k)
			{
				
				printf("*");
				
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