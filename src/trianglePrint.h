//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_TRIANGLEPRINT_H
#define C_LANGUAGE_PROJ_TRIANGLEPRINT_H


#include <stdio.h>

#define N 3

void triangle() {
    int i = 1, m = 1;
    for (i = 1; i <= N; i++) {
        for (m = 1; m <= i - 1; m++)
            printf(" ");
        printf("***");
        printf("\n");
    }
}

#endif //C_LANGUAGE_PROJ_TRIANGLEPRINT_H
