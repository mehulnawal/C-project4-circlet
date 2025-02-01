/*develop a program to print flyod triangle pattern using nested for loop
 11        
 12 13              
 14 15 16           
 17 18 19 20        
 21 22 23 24 25    
*/
#include<stdio.h>
void main()
{
	int i,j,n=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf(" %d",n++);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}
