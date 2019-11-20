#include <stdio.h>

#define N 3

triangle() {
    int i = 1, m = 1;
    for (i = 1; i <= N; i++) {
        for (m = 1; m <= i - 1; m++)
            printf(" ");
        printf("***");
        printf("\n");
    }
}
