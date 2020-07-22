//==========================================================FUNCTIONS===================================================================
//FUNCTIONS ARE OF 4 TYPES IN C PROGRAMMING.
//1.TAKES NOTHING RETURNS NOTHING.
//2. TAKES NOTHING RETURNS SOMETHING.
//3. TAKES SOMETHING RETURNS NOTHING.
//4. TAKES SOMETHING RETURNS SOMETHING.
//=====================================================================================================================================
//THIS IS AN EXAMPLE OF TAKES SOMETHING AND RETURNS SOMETHING.
//=====================================================================================================================================
#include<stdio.h>
int main()
{
	int number1,number2,total=0;
	printf("\nEnter a number:-");
	scanf("%d",&number1);
	printf("\nEnter another number:-");
	scanf("%d",&number2);
	int addition_of_two(int,int);
	total=addition_of_two(number1,number2);  //PASSING THE VALUES OF THE VARIABLES IN THE FUNCTION AT THE TIME OF CALLING.
	printf("\nAddition of the given numbers = %d\n",total);
}
int addition_of_two(int a,int b)
{	
	return a+b;
}
//======================================================================================================================================
//IN THIS TYPE OF FUNCTION THERE ARE TWO MAIN TYPES WITHIN ITSELF. i)CALL BY VALUE ii)CALL BY REFERENCE.
//THIS IS AN EXAMPLE OF CALL BY VALUE.
//SINCE WE ARE PASSING THE VALUES AT THE TIME OF CALLING THE FUNCTION.
//WE USE CALL BY VALUE WHEN WE USE THE VALUES OF THE VARIABLE AS IT IS TO GET ANY RESULT. 
//LIKE ADDITION WHERE THE TWO GIVEN NUMBERS BY THE USER IN THE TWO VARIABLES SHOULD NOT BE UNCHANGED.
//WE USE CALL BY VALUE WHEN WE ALTER THE VALUES OF THE VARIABLES AS IT IS TO GET ANY RESULT.
//HERE WE USE THE ADDRESS OF THE VARIABLES BY PASSING THEM IN THE ARGUMENTS FOR ALTERATION.
//THE MOST COMMON EXAMPLE OF CALL BY REFERENCE IS SWAPPING.
//======================================================================================================================================