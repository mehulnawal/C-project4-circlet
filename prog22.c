/*
1                         1 
1 2                   2 1
1 2 3             3 2 1
1 2 3 4       4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4       4 3 2 1
1 2 3             3 2 1 
1 2                   2 1
1                         1
*/
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (5- i); k++) {
            printf("   ");
        }

        for (int l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }
    for (int i = 5- 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (5 - i); k++) {
            printf("   ");
        }
        for (int l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }
    return 0;
}
