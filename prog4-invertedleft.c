/*develop a program to print inverted left half triangle pattern using nested for loop
1  0  1  0  1 
    1  0  1  0
       1  0  1
          1  0
             1
*/
#include <stdio.h>
int main() {
    int rows,i,j,k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
	 {
        for ( j = 1; j < i; j++) 
		{
            printf("   ");
        }
        for ( k = i; k <= rows; k++) 
		{
            if ((k - i) % 2 == 0) 
			{
                printf(" 1 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
