#include <stdio.h>
main() {
    int i, j, num = 10;

    for(i = 0; i <= 4; i++) {

        for(int s = 0; s < 4 - i; s++) {
            printf("  ");
        }

        for(j = num - i; j <= num; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

}

