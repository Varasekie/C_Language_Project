//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_PAINTK_H
#define C_LANGUAGE_PROJ_PAINTK_H

#include <stdio.h>
#define N 4

void paint_k() {
    int i = 1, j = 1;
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8 - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("K");
        for (j = 1; j <= 8 - i; j++)
            printf(" ");
        putchar('\n');
    }
}

void paintingK2() {
    int i = 1, m = 1, j = 1;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("K");
        for (j = 1; j <= N - i; j++)
            printf(" ");
        putchar('\n');
    }
}
#endif //C_LANGUAGE_PROJ_PAINTK_H
