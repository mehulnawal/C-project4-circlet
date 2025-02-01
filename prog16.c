/*
             1 
          2  1
       3  2  1
    4  3  2  1
 5  4  3  2  1
*/
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++)
		{
            printf("   ");
        }
        for (int k = i; k >= 1; k--)
		{
            printf(" %d ", k);
        }
        printf("\n");
    }

    return 0;
}
