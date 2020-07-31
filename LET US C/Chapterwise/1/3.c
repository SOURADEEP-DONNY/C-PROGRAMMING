/*If the marks obtained by a student in five different subjects
  are input through the keyboard, find out the aggregate marks
  and percentage marks obtained by the student. Assume that
  the maximum marks that can be obtained by a student in each
  subject is 100.
*/
//==============================================================================
#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5;
	float per;
	int aggregate_marks=0;
	printf("\nEnter marks of subject 1:-");
	scanf("%d",&m1);
	printf("\nEnter marks of subject 2:-");
	scanf("%d",&m2);
	printf("\nEnter marks of subject 3:-");
	scanf("%d",&m3);
	printf("\nEnter marks of subject 4:-");
	scanf("%d",&m4);
	printf("\nEnter marks of subject 5:-");
	scanf("%d",&m5);
	aggregate_marks=m1+m2+m3+m4+m5;
	per=((aggregate_marks)/5);
	printf("\nAggregate marks = %d",aggregate_marks);
	printf("\nPercentage = %f",per);
}