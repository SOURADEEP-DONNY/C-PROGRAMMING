/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mat[100][100], transpose[100][100];
    int r,c,i,j;
    
    printf("\nEnter rows and columns");
    scanf("%d",&r);
    scanf("%d",&c);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter a%d%d element",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",mat[i][j]);
        }
    printf("\n");
    }
    //Transposing the matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=mat[i][j];
        }
    }
    //Displaying the transpose matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
