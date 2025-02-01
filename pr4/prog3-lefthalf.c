/*develop a program to print left half triangle pattern using nested for loop
         5
       4 5
     3 4 5
   2 3 4 5
 1 2 3 4 5
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf(" %d",j);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}
