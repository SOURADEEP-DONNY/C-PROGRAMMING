//==========================================================FUNCTIONS===================================================================
//FUNCTIONS ARE OF 4 TYPES IN C PROGRAMMING.
//1.TAKES NOTHING RETURNS NOTHING.
//2. TAKES NOTHING RETURNS SOMETHING.
//3. TAKES SOMETHING RETURNS NOTHING.
//4. TAKES SOMETHING RETURNS SOMETHING.
//=====================================================================================================================================
//THIS IS AN EXAMPLE OF TAKES SOMETHING AND RETURNS NOTHING.
//=====================================================================================================================================
#include<stdio.h>
int main()
{
	int num1,num2;      // GIVING THE TWO NUMBERS FROM THE MAIN FUNCTION TO THE USER DEFINED FUNCTION.
	printf("\nEnter a number:-");
	scanf("%d",&num1);
	printf("\nEnter another number:-");
	scanf("%d",&num2);
	void addition_of_two_integers(int,int); //FUNCTION DECLARATION 1ST 'void'=RETURN TYPE & 2ND THE TWO INTEGER NUMBERS.
	addition_of_two_integers(num1,num2);  // CALLING THE FUNCTION BY PASSING THE TWO VARIABLE VALUES AS AN I/P TYPE, ACTUAL ARGUMENTS.
}
void addition_of_two_integers(int a,int b) // FUNCTION DEFINITION. HERE THE ARGUMENTS ARE CALLED FORMAL ARGUMENTS. 
{
	int total=0;
	total=a+b;
	printf("\nSum of the two integers is %d\n",total);
}
//=======================================================================================================================================