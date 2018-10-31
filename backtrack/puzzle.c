#include<stdio.h>
#include<string.h>


void main()
{
 char grid[10][10],input[4][20];
 int i,j;
 for(i=0;i<10;i++)
 { for(j=0;j<10;j++)
   { scanf("%c",&grid[i][j]);}}
 for(i=0;i<4;i++)
 { scanf("%s",input[i]);}
}
