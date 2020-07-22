//==============================FUNCTIONS==================================================
//FUNCTIONS ARE OF 4 TYPES IN C PROGRAMMING.
//1.TAKES NOTHING RETURNS NOTHING.
//2. TAKES NOTHING RETURNS SOMETHING.
//3. TAKES SOMETHING RETURNS NOTHING.
//4. TAKES SOMETHING RETURNS SOMETHING.
//=========================================================================================
//THIS IS AN EXAMPLE OF TAKES NOTHING AND RETURNS NOTHING.
//=========================================================================================
#include<stdio.h>
int main()
{
	void add(void);// FUNCTION DECLARATION. 1ST 'void'=return type & 2ND 'void'=INPUT TYPE.
	add(); // CALLING THE FUNCTION.
	return 0;
}
void add() //THIS VOID DEFINES THAT THE FUNCTION IS A 'RETURNS NOTHING' TYPE OF FUNCTION.
{
	int a,b,total=0;
	printf("\nEnter a number:-");
	scanf("%d",&a);
	printf("\nEnter another number:-");
	scanf("%d",&b);
	total=a+b;
	printf("\nTotal sum is = %d\n",total);
}
//========================================================================================