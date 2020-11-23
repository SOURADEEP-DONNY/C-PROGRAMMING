#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100], tosearch[100];
	int i,j,found;
	int count=0;
	int stringlen, searchlen;
	
	
	gets(str);
	gets(tosearch);
	//scanf("%[^\n]s",str);
	//scanf("%[^\n]s",tosearch);
	
	stringlen=strlen(str);
	searchlen=strlen(tosearch);
	count=0;
	
	for(i=0;i<=stringlen-searchlen;i++)
	{
		found = 1;
		for(j=0;j<searchlen;j++)
		{
			if(str[i+j]!=tosearch[j])
			{
				found=0;
				break;
			}
		}
		if(found==1)
		{
			count=count+1;
		}
	}
	printf("OUTPUT = %d",count);
	return 0;
}
