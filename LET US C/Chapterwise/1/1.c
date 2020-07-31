/*Ramesh’s basic salary is input through the keyboard. His
  dearness allowance is 40% of basic salary, and house rent
  allowance is 20% of basic salary. Write a program to calculate
  his gross salary.
*/
#include<stdio.h>
int main()
{
	float basic_salary,dearness_allowance,houserent_allowance,gross_salary=0;
	printf("\nENTER BASIC SALARY:-");
	scanf("%f",&basic_salary);
	dearness_allowance=0.4*basic_salary;
	houserent_allowance=0.2*basic_salary;
	gross_salary=basic_salary+dearness_allowance+houserent_allowance;
	printf("\nGross Salary = %f\n",gross_salary);
	return 0;
}