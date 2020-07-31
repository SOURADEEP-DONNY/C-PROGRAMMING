//==============================================================================
//                       SWAPPING TWO USING VARIABLES
/*Two numbers are input through the keyboard into two
  locations C and D. Write a program to interchange the
  contents of C and D.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter value for 'a':-");
	scanf("%d",&a);
	printf("\nEnter value for 'b':-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nValue of 'a' is %d",a);
	printf("\nValue of 'b' is %d",b);
	printf("\n");
}
//==============================================================================