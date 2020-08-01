//==============================================================================
/* If the total selling price of 15 items and the total profit earned
   on them is input through the keyboard, write a program to
   find the cost price of one item.
*/
//==============================================================================
#include<stdio.h>
int main()
{
	int tot_sale,tot_profit,tot_cp;
	float one_cp;
	printf("\nEnter total sale price of 15 items:-");
	scanf("%d",&tot_sale);
	printf("\nEnter the total profit of 15 items:-");
	scanf("%d",&tot_profit);
	tot_cp=tot_sale-tot_profit;
	one_cp=tot_cp/15;
	printf("\nCost of one item:- %f",one_cp);
	printf("\n");
	return 0;
}
//==============================================================================