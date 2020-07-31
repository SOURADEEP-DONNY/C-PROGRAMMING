/*The length & breadth of a rectangle and radius of a circle are
  input through the keyboard. Write a program to calculate the
  area & perimeter of the rectangle, and the area &
  circumference of the circle.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int length,breadth,radius;
	float rect_area,circle_area,peri_rect,peri_circle,pie=3.14;
	printf("\nEnter length of the rectangle:-");
	scanf("%d",&length);
	printf("\nEnter breadth of the rectangle:-");
	scanf("%d",&breadth);
	printf("\nEnter radius of the circle:-");
	scanf("%d",&radius);
	rect_area=length*breadth;
	peri_rect=2*(length+breadth);
	circle_area=pie*radius*radius;
	peri_circle=2*pie*radius;
	printf("\nArea of the rectangle = %f",rect_area);
	printf("\nPerimeter of the rectangle is %f",peri_rect);
	printf("\nArea of the circle = %f",circle_area);
	printf("\nPerimeter of the circle = %f\n",peri_circle);
}
//==============================================================================