//==============================STRUCTURE=======================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	//char name[100];
	//char degree[6];
	int total_marks;
};
struct another_student
{
	char name[100];
	char degree[20];
	int total_marks;
}var; //ANOTHER WAY OF DECLARING VARIABLE. HERE 'var' IS THE VARIABLE.
/*struct candidate
{
	char name[100];
	char degree[20];
	int total_marks;
};*/
/* BOTH OF THE STRUCTURES USED ARE GLOBAL STRUCTURES
   SINCE THEY ARE NOT USED INSIDE ANY OF THE FUNCTIONS
   DEFINED INSIDE THE PROGRAM
*/
int main()
{
	struct student initialss,perfect;
	/* HERE "struct" IS THE KEYWORD,
	   "student" IS THE DATATYPE &
	   "initials" IS THE VARIABLE NAME
	   THIS IS A WAY OF DECLARING VARIABLE.
    */
	//initialss.name="SOURADEEP DAS";
	//initialss.degree="B.TECH";
	initialss.total_marks=88;
	
	//var.name="DIYA";
	//var.degree="BTECH";
	var.total_marks=90;
	
	//struct candidate perfect;
	//ANOTHER WAY OF ASSIGNING VALUES FROM ONE STRUCTURE TO ANOTHER IS
	perfect=initialss;
	//printf("NAME = %c",perfect.name);
	//printf("DEGREE = %c",perfect.degree);
	printf("TOTAL MARKS = %d",perfect.total_marks);
	printf("\n");
	return 0;
}
//==============================================================================