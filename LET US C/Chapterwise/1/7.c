//==============================================================================
//                       SWAPPING USING 3 VARIABLES
/*Two numbers are input through the keyboard into two
  locations C and D. Write a program to interchange the
  contents of C and D.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int a,b,swapping_variable;
	printf("\nEnter value for 'a':-");
	scanf("%d",&a);
	printf("\nEnter value for 'b':-");
	scanf("%d",&b);
	swapping_variable=a;
	a=b;
	b=swapping_variable;
	printf("\nValue of 'a' is %d",a);
	printf("\nValue of 'b' is %d",b);
	printf("\n");
}
//==============================================================================