/*
            1
         1 2 1
      1 2 3 2 1
   1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
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
        for (int k = 1; k <= i; k++) 
		{
            printf("%d", k);
            if (k < i)
			 {
                printf(" ");
            }
        }
        for (int l = i - 1; l >= 1; l--) 
		{
            printf(" %d", l);
        }
        printf("\n");
    }

    return 0;
}
