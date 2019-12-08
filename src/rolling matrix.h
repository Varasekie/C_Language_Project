//
// Created by 86139 on 2019/12/2.
//

#ifndef C_LANGUAGE_PROJ_ROLLING_MATRIX_H
#define C_LANGUAGE_PROJ_ROLLING_MATRIX_H

#include <stdio.h>

#define A 4
#define B 3

void rollingmatrix() {
    int i, j;
    int a[A][B];
    for (i = 0; i < A; i++) {
        for (j = 0; j < B; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < B; i++) {
        for (j = 0; j < A; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

#endif //C_LANGUAGE_PROJ_ROLLING_MATRIX_H
