//=============================PATTERN 23=======================================
//                              \*****/
//                              *\***/*
//                              **\*/**
//                              ***/***
//                              **/*\**
//                              */***\*
//                              /*****\
//==============================================================================
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i||j==8-i)
			{
				if(i==8-j) //CHANGING POSITION 4 BACKSLASH TO FRONTSLASH.
				 printf("/"); //CHANGING THE SEQUENCE.
                else
                 printf("\\");//DOUBLE SLASH DUE TO ESCAPE SEQUENCE.
			}
			else
			{
				printf("*");
			}
		}
	printf("\n");
	}
printf("\n\n");
return 0;
}
//==============================================================================