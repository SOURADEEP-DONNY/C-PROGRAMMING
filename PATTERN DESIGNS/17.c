//============================PATTERN 17========================================
//                               1
//                              232
//                             34543
//                            4567654
//=============================================================================
#include<conio.h>
int main()
{
	int i,j;
	int k;
	k=0;
	for(i=1;i<=4;i++)
	{
		k=i-1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				j<=4?k++:k--;
				printf("%d",k);
			}
			else
			{
				printf(" ");
			}
		}
	printf("\n");
	}
printf("\n");
return 0;
}
//==============================================================================