/*develop a program to print full pyramid pattern using nested for loop
1                         1 
1 2                   2 1   
1 2 3             3 2 1     
1 2 3 4       4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
#include <stdio.h>
int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (rows - i); k++) 
		{
            printf("   ");
        }
        for (int l = i; l >= 1; l--) 
		{
            printf("%d ", l);
        }

        printf("\n");
    }
    return 0;
}
