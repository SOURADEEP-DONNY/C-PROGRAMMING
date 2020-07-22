//==============================FUNCTIONS==================================================
//FUNCTIONS ARE OF 4 TYPES IN C PROGRAMMING.
//1.TAKES NOTHING RETURNS NOTHING.
//2. TAKES NOTHING RETURNS SOMETHING.
//3. TAKES SOMETHING RETURNS NOTHING.
//4. TAKES SOMETHING RETURNS SOMETHING.
//==========================================================================================================
//THIS IS AN EXAMPLE OF TAKES NOTHING AND RETURNS SOMETHING.
//==========================================================================================================
#include<stdio.h>
int main()
{
	int total=0;
	int addition(void); // FUNCTION DECLARATION. 1ST 'int'=RETURN TYPE & 2ND 'void'=TAKING TYPE.
	total=addition(); // FUNCTION CALLING.
	printf("\nSum of the two given numbers are:- %d\n",total);
	return 0; // SINCE WE HAVE DECLARED THE MAIN FUNCTION AS 'int' TYPE.
}
int addition()   // FUNCTION DEFNITION.
{
	int a,b;
	printf("\nEnter a number:-");
	scanf("%d",&a);
	printf("\nEnter another number:-");
	scanf("%d",&b);
	return a+b; // RETURNING THE RESULT WHERE IT IS CALLED. IN THIS CASE VARIABLE 'total' IN MAIN FUNCTION.
}
//=========================================================================================================