/*
5 4 3 21
  5 4 32
    5 43
      54
        5*/
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j < i; j++)
		 {
            printf("  ");
        }
        for (int k = 5; k >= i; k--) 
		{
            printf("%d", k);
            if (k > i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
