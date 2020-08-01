//==============================================================================
/* In a town, the percentage of men is 52. The percentage of
   total literacy is 48. If total percentage of literate men is 35 of
   the total population, write a program to find the total number
   of illiterate men and women if the population of the town is
   80,000.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int population=80000;
	int men,women,literate_men,illeterate_men;
	men=0.52*80000;
	women=(1-0.52)*80000;
	illeterate_men=(1-0.35)*men;
	printf("\nTOTAL ILLETERATE MEN = %d",illeterate_men);
	printf("\nTOTAL NUMBER OF WOMEN = %d",women);
	printf("\n");
}
//==============================================================================