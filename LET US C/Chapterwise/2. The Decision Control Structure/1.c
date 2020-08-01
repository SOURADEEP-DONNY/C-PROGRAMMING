//==============================================================================
/* If cost price and selling price of an item is input through the
   keyboard, write a program to determine whether the seller has
   made profit or incurred loss. Also determine how much profit
   he made or loss he incurred.
*/
//==============================================================================
#include<stdio.h>
int main()
{
	int cp,sp,npnl;
	printf("\nENTER THE COST PRICE OF TH ITEM:-");
	scanf("%d",&cp);
	printf("\nEnter the sale price of the item:-");
	scanf("%d",&sp);
	if(cp>sp)
	{
		printf("\nTHERE HAS BEEN A LOSS IN THE TRANSACTION!!!\n");
		npnl=cp-sp;
		printf("\nTHE NET LOSS IS RUPEES %d",npnl);
	}
	else if(sp>cp)
	{
		printf("\nCONGRATULATIONS! THERE HAS BEEN A PROFIT IN THE TRANSACTION!!!");
		npnl=sp-cp;
		printf("\nTHE NET PROFIT IS RUPEES %d",npnl);
	}
	else
	{
		printf("\nTHERE IS NO PROFIT NO LOSS IN THE TRANSACTION!");
	}
printf("\n");
return 0;
}