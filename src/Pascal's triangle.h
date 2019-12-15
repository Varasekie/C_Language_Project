//
// Created by 86139 on 2019/12/2.
//

#ifndef C_LANGUAGE_PROJ_PASCAL_S_TRIANGLE_H
#define C_LANGUAGE_PROJ_PASCAL_S_TRIANGLE_H

#define N 10

#include <stdio.h>

void Pascaltriangle() {
    int a[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
/*    for (i = 0; i < N; i++) {//检查是否输入有问题
        for (j = 0; j < i+1; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }*/
    for (i = 2; i < N; i++) {
        for (j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i -1][j ];//行与列上下关系？
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < i+1; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}


#endif //C_LANGUAGE_PROJ_PASCAL_S_TRIANGLE_H
