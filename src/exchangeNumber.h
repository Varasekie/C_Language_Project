//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_EXCHANGENUMBER_H
#define C_LANGUAGE_PROJ_EXCHANGENUMBER_H


#include <stdio.h>

#define N 5

int exchangeNum() {
    int a[N] = {1, 4, 2, 6, 8}, i, temp;
    printf("Before\n");
    for (i = 0; i <= N - 1; i++) {
        printf("%d", a[i]);
    }
    for (i = 0; i <= N / 2; i++) {
        temp = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = temp;
    }
    printf("\nAfter：\n");
    for (i = 0; i <= N - 1; i++) {
        printf("%d", a[i]);
    }
}

#endif //C_LANGUAGE_PROJ_EXCHANGENUMBER_H
