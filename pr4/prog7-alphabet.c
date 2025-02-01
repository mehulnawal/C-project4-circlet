/*develop a program to print custom alphabetic pattern using nested for loop
* * * * * 
*       *
* * * * *
*      *
*      *
*/
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 3; i++) 
	{
        for (int j = 1; j <= 5; j++) 
		{
            if (i == 1 || i == 3 || j == 1 || j == 5) 
			{
                printf("* ");
            } 
			else 
			{
                printf("  "); 
            }
        }
        printf("\n"); 
    }
     for (int i = 1; i <= 2; i++) 
	{
        for (int j = 1; j <= 2; j++) 
		{
            if (i == 1 || i == 2 || j == 1 || j == 2) 
			{
                printf("*      ");
            } 
			else 
			{
                printf("  "); 
            }
        }
        printf("\n"); 
    }
    return 0;
}
