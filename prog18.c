/*
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++) 
		{
            printf("  ");
        }
        for (int k = 1; k <= i; k++) 
		{
            printf("%d", 5 - i + 1);
            if (k < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
