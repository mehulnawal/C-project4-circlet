/*develop a program to print custom numeric pattern using nested for loop
         5
      4 5 6
    3 4 5 6 7
  2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
*/
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++)
	 {
    	for (int j = 1; j <=9; j++) 
		{
         	if(j>=6-i && j<=4+i)
         	{
         		printf("%d ",j);
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
