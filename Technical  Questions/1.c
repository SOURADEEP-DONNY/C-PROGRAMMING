/*======================================================================================================= 
	Which of the following statements should be used to obtain a remainder after dividing 3.14 by 2.1 ?

	A.	rem = 3.14 % 2.1;
	B.	rem = modf(3.14, 2.1);
	C.	rem = fmod(3.14, 2.1);
	D.	Remainder cannot be obtain in floating point division.
*/
//========================================================================================================
//	C.	rem = fmod(3.14, 2.1);
/*  Answer: Option C

    Explanation:

	fmod(x,y) - Calculates x modulo y, the remainder of x/y.
	This function is the same as the modulus operator. But fmod() performs floating point divisions.
*/
//=========================================================================================================
#include <stdio.h>
#include <math.h>

int main ()
{
  printf ("fmod of 3.14/2.1 is %lf\n", fmod (3.14,2.1) );
  return 0;
}
//=========================================================================================================
