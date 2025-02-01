/*develop a program to print right half triangle pattern using nested for loop
41            
 41 42         
 41 42 43      
 41 42 43 44   
 41 42 43 44 45
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=45;j++)
		{
			if(j<=i)
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
