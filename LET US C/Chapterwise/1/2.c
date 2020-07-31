/*The distance between two cities (in km.) is input through the
  keyboard. Write a program to convert and print this distance
  in meters, feet, inches and centimeters.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int d1;
	float in_metre,in_cm,in_feet,in_inches;
	printf("\nEnter distance between the two cities in kilometers:-");
	scanf("%d",&d1);
	in_feet=d1*3280.84;
	in_inches=d1*39370.1;
	in_metre=d1*1000;
	in_cm=d1*100000;
	printf("\nDistance in meters = %f",in_metre);
	printf("\nDistance in feet = %f",in_feet);
	printf("\nDistance in inches = %f",in_inches);
	printf("\nDistance in centimeters = %f\n",in_cm);
}
//==============================================================================